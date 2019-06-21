#include "decl.h"

MyException::MyException() {}
MyException::MyException(const MyException&) {}
MyException::~MyException() {}

void pitch() {
    throw MyException();
}

