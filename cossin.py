import math

for d in range (0,360):
	rads = (3.141592/180)*d
	x = math.cos(rads)
	y = math.sin(rads)
	print(d,x,y)
