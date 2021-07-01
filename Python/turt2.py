# save as turt2.py

import turtle
screen = turtle.Screen()
screen.bgcolor("#C3FFF9")
t = turtle.Turtle()
#turtle.tracer(0, 0)

t.pencolor("#6D6D6D")
t.pensize(5)
t.goto(0,-200)
t.speed(200)
t.pendown()

t.goto(0,0)
t.pensize(1)
t.begin_fill()
t.fillcolor("#FF3332")
dist = 2
for i in range(100):
	t.pencolor("#000000")
	t.fd(dist)
	t.speed(200)
	t.circle(5,9)
	t.rt(90)
	dist += 2 # dist = dist + 2
	print(dist)
t.end_fill()

t.penup()
t.pencolor("#74B739")
t.goto(0,-202)
t.pensize(10)
t.fillcolor("#74B739")
t.begin_fill()
t.pendown()
t.goto(-475,-200)
t.lt(90)
t.goto(-475,-390)
t.lt(90)
t.goto(475,-390)
t.goto(0,-200)
t.end_fill()

t.penup()
t.goto(-259,-200)
t.pensize(5)
t.pencolor("#6D6D6D")

t.pendown()
t.goto(-260,-120)
t.pensize(1)
t.begin_fill()
t.fillcolor("#FDFF32")
dist = 2
for i in range(71):
	t.pencolor("#000000")
	t.fd(dist)
	t.speed(200)
	t.circle(7,11)
	t.rt(90)
	dist += 1 # dist = dist + 2
	print(dist)
t.end_fill()

t.penup()
t.pensize(4)
t.pencolor("#6D6D6D")
t.goto(260,-300)
t.pendown()
t.goto(260,-270)

t.pendown()
t.goto(260,-270)
t.pensize(1)
t.begin_fill()
t.fillcolor("#324BFF")
dist = 2
for i in range(41):
	t.pencolor("#000000")
	t.fd(dist)
	t.speed(200)
	t.circle(7,11)
	t.rt(90)
	dist += 1 # dist = dist + 2
	print(dist)
t.end_fill()
t.penup()


screen.exitonclick()
