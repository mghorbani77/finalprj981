#ifndef 1
#include"vertical.h"
#include "pipe.h"
#include<iostream>
vertical::vertical(unsigned int a, unsingned int b,bool c)
{
	setx(a);
	sety(b);
	setwater(c);
}
vertical::~virtical() {
	std::cout << "vertical is remove";
}
void vertical::setx(unsingned int &a) {
	x = a;
}
unsingned int vertical::getx() const
{
	return x;
}
unsingned int vertical::gettype() const
{
	return type;
}

#endif // !1
