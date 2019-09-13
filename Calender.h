#pragma once
#include"Chronos.h"


class Calender: public Chronos
{
private:
	 int year;
	 int month;
	 int day;

public:

	Calender(void);

	virtual ~Calender(void);

	virtual void now() const=0;


};

