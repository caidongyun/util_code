#ifndef __base_h
#define __base_H

#include "base.h"
#include <string>

class Derived2: public Base {
public:
	// ���캯��
	Derived2();

	// ��������
	virtual ~Derived2();

	// ��Ա����1
	virtual int foo(const std::string &);

	// ��Ա����2
	virtual void print();
};

#endif

