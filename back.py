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