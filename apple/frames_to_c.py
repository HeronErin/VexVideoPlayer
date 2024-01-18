# Copyright (C) 2024 HeronErin
#
# This program is free software; you can redistribute it and/or
# modify it under the terms of the GNU General Public License as
# published by the Free Software Foundation; either version 3 of the
# License, or (at your option) any later version.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.

import os, struct

xtable = []
f_data = ""

last = 0
f2 = open("vid.dat", "wb")

for fn in sorted(os.listdir("b_frames"), key=lambda x: int(x.split(".")[0])):
	num = int(fn.split(".")[0])
	for _ in range(num-last-1): xtable.append(None)
	last = num

	f = open(os.path.join("b_frames", fn), "rb")
	b = f.read()
	f.close()
	xtable.append(b)

table_len=len(xtable)
header_length = 4 + table_len*4*2 # 4 bytes per int at 2 ints each
counter = header_length
last_len = 0
f2.write(struct.pack("<I", table_len*4*2)) 
for bytez in xtable:
	if bytez is not None:
		assert counter < 0xFF_FF_FF_FF
		f2.write(struct.pack("<I", counter)) 
		last_len = len(bytez)
		f2.write(struct.pack("<I", last_len))
		# print(counter, last_len)
		counter+=last_len
	else:
		f2.write(struct.pack("<I", counter-last_len)) 
		f2.write(struct.pack("<I", last_len))


for bytez in xtable:
	if bytez is not None:
		f2.write(bytez)
f2.close()

