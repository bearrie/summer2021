# save file as forloop1.py
# encapsulation - by tabbing the next commands in a sequence

print("DEC\tHEX\tBIN\tCHAR")
for d in range(32,128):
	h = hex(d)
	h = h.replace("0x","$")

	b = bin(d)
	b = b.replace("0b","-")
	c = chr(d)
	#print(str(d)+" "+h,end="")
	print(str(d)+"\t"+h+"\t"+b+"\t"+c)
	

# str(d)+" " is called concantination
