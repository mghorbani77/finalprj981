#ifndef 1
#
#include"horzantal.h"
#include "pipe.h"
#include<iostream>
horzantal::horzantal(unsigned int a, unsingned int b,bool c)
{
	setx(a);
	sety(b);
	setwater(c);
}
horzantal::~horzantal() {
	std::cout << "horzantal is remove";
}
void horzantal::sety(unsingned int &a) {
	y = a;
}
unsingned int horzantal::gety() const
{
	return y;
}
unsingned int horzantal::gettype() const
{
	return type;
}
#endif // !1
