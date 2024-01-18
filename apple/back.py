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


im = Image.new(mode="RGB", size=(480, 272))
f = open("b_frames/350.png.bin", "rb")
bts = xDecompress(f.read())
f.close()
index = 0
for b in bts:
	for i in range(7):
		
		r = 256 if (1 << i) & b else 0
		im.putpixel((index % im.width, index // im.width), (r, r, r))
		index += 1
# f.read(1)

im.save("a.png")