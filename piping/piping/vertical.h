#pragma once
#ifndef vertical
#include<iostream>
#include"pipe.h"
class vertical :public pipe
{
public:
	vertical(unsigned int, unsigned int,bool);

	vertical::~vertical();

private:

	const unsigned int type = 1;
	const std::string img = "vertical.jpg";



};

#endif // !vertical

