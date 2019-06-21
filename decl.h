#ifndef DECL_H
#define DECL_H

void pitch();

struct MyException {
    MyException();
    MyException(const MyException&);
    ~MyException();
};

#endif

