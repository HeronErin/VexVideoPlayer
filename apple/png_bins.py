# Copyright (C) 2024 HeronErin
#
# This program is free software; you can redistribute it and/or
# modify it under the terms of the GNU General Public License as
# published by the Free Software Foundation; either version 3 of the
# License, or (at your option) any later version.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.

from PIL import Image

def toBytes(f):
	mask = 1
	bit = 0
	cbyte = 0


	bytez = bytearray()

	i = Image.open(f)
	i = i.resize((480 ,272 ))
	for y in range(i.height):
		for x in range(i.width):
			px = i.getpixel((x, y))
			aver = sum(px)//len(px)
			# print(aver)
			
			# print(mask, x, y)
			bit = mask if aver >= 128 else 0
			cbyte|=bit
			# print(bit)

			mask=mask*2%256 or 1
			if mask == 1:
				bytez.append(cbyte)
				# print(f"{cbyte:08b}", end = "")
				cbyte = 0
	bytez.append(cbyte)
	i.close()
	return bytez
# Run length compression is great for this job!
def xCompress(bytez):
	out = bytearray()
	lbyte = None
	lcount = 0
	for b in bytez:
		if lcount == 127:
			out.append(128 | lcount)
			lbyte = None
			lcount=0
			continue
		if b == lbyte:
			lcount+=1
			continue
		if lcount:
			out.append(128 | lcount)
			lcount = 0

		out.append(b)

		lbyte = b
	if lcount:
		out.append(128 | lcount)
	return out
def xDecompress(bytez):
	out = bytearray()
	lbyte = None
	for b in bytez:
		if (128 & b) == 0:
			out.append(b)
			lbyte = b
		else:
			for _ in range(b & 127):
				out.append(lbyte)
	return out
import os
import hashlib
lastHash = None
for f in sorted(os.listdir("frames"), key=lambda x: int(x.split(".")[0])):
	b = toBytes(os.path.join("frames", f))
	# has = hashlib.md5(bytes(b)).hexdigest()

	# if has == lastHash:
	# 	continue
	# lastHash = has
	f = open(os.path.join("b_frames", f+".bin"), "wb")
	f.write(bytes(b))
	f.close()


	# break
