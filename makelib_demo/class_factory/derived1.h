#ifndef __base_h
#define __base_H

#include "base.h"
#include <string>

class Derived1: public Base {
public:
	// ���캯��
	Derived1();

	// ��������
	virtual ~Derived1();

	// ��Ա����1
	virtual int foo(const std::string &);

	// ��Ա����2
	virtual void print();
};

#endif

