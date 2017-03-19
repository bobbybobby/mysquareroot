#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <ruby.h>


uint64_t c_squareroot(uint64_t value);

VALUE cSquareRoot;

void Init_squareroot();

VALUE method_squareroot(VALUE self, VALUE val);

void Init_squareroot() 
{
  cSquareRoot = rb_define_class("CSquareroot", rb_cObject);
  rb_define_singleton_method(cSquareRoot, "sqrt", method_squareroot, 1);
}

VALUE method_squareroot(VALUE self, VALUE val)
{
  uint64_t cval, cres; 
  cval = NUM2LL(val);
  cres = c_squareroot(cval);
  return LL2NUM(cres);
}

uint64_t c_squareroot(uint64_t value) 
{
  uint64_t res;
  for (res=0;res*res < value; res++);

  return res;
}
