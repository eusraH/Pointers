#pragma once
#include <iostream>

class Chronos
{
public:
	Chronos(void);
	~Chronos(void);

	virtual void now() const =0;


};

