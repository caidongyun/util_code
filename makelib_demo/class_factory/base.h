#ifndef __base_h
#define __base_H

#include <string>

class Base {
public:
	// ���캯��
	Base();

	// ��������
	virtual ~Base() = 0;

	// ��Ա����1
	virtual int foo(const std::string &) = 0;

	// ��Ա����2
	virtual void print() = 0;
};

extern "C" Base *create();
extern "C" void destroy(Base *);

#endif
