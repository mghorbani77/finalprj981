#pragma once
#ifndef horzan
#include<iostream>
#include"pipe.h"
class horzan :public pipe
{
public:
	horzan(unsigned int, unsigned int ,bool);

	horzan::~horzan();

private:
const unsigned int type = 2;
	const std::string img = "horzan.jpg";



};

#endif // !horzan


