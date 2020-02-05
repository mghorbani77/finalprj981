#pragma once
#ifndef PIPE_H
#define PIPE_H
#include <string>
class pipe
{
public:
	pipe(unsigned int a = 0,unsigned int b=1);
	~pipe();
	virtual void setx(unsigned int &) = 0;
	virtual unsigned getx()const = 0;
	virtual void sety(unsigned int &) = 0;
	virtual unsigned gety()const = 0;
	virtual unsigned gettype()const = 0;
	virtual std::string getpic()const = 0;
	virtual bool getwater()const = 0;
	virtual bool setwater(bool)const = 0;

protected:
	unsigned int x;
	unsigned int y;
	bool water;
	const unsigned int type;
	const std::string img;
};

#endif // DEBUG

////////////////////////////////////////////////////////////////////////
