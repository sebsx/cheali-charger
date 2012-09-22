#ifndef SIMPLECHARGE_H_
#define SIMPLECHARGE_H_


#include "Strategy.h"

class SimpleCharge : public Strategy {
public:
	SimpleCharge(){};
	virtual void powerOn();
	virtual statusType doStrategy();
	virtual void powerOff();
	bool isStable();
};


#endif /* SIMPLECHARGE_H_ */

