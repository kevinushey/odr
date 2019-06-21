#include <stdio.h>
#include "decl.h"

int main() {
    try { pitch(); }
    catch (MyException& e) { printf("MyException()\n"); }
    catch (...)            { printf("[unknown exception]\n"); }
}

