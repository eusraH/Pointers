#pragma once
#include"Chronos.h"


class Clock: public Chronos
{
private:
	 int hour;
	 int minute;
	 int second;

public:
	Clock(void);
	
	virtual ~Clock(void);

	virtual void now() const;
};

