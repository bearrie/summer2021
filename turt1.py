import turtle

import math

import random

w = turtle.Screen()
w.clear()
w.bgcolor("#000000")
t = turtle.Turtle()
#turtle.tracer(0, 0)
# - - - - -

for d in range (0,360*13):
	rads = (3.141592/180)*d
	x = math.cos(rads)*100
	y = math.sin(rads)*100
	#print(d,x,y)
	t.goto(x,y)
	hx = hex(random.randint(0,255))
	hx = hx.replace("0x","")
	thecolor = "#" +hx+hx+hx
	print(hx)
	t.width(10)
	t.pencolor(thecolor)
	if(amp % 360 == 0):
		amp = amp + 20

w.exitonclick()
	
# ~ t.pencolor('#FF0000')
# ~ t.width(5)
# ~ t.goto(0,0)
# ~ t.seth(0)
# ~ t.forward(100)
# ~ t.penup()
# ~ t.pencolor('#00FF00')
# ~ t.goto(0,0)
# ~ t.pendown()
# ~ t.seth(90)
# ~ t.forward(100)
# ~ t.penup()
# ~ t.pencolor('#0000FF')
# ~ t.goto(0,0)
# ~ t.pendown()
# ~ t.seth(180)
# ~ t.forward(100)
# ~ t.penup()
# ~ t.pencolor('#FFFF00')
# ~ t.goto(0,0)
# ~ t.pendown()
# ~ t.seth(270)
# ~ t.forward(100)
# ~ #turtle.update()
# ~ w.exitonclick()
