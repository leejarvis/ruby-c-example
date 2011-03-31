#include "ruby.h"

VALUE Hello;
VALUE hello_world(VALUE self);

void Init_hello()
{
    Hello = rb_define_module("Hello");
    rb_define_method(Hello, "world", hello_world, 0);
}

VALUE hello_world(VALUE self)
{
    return rb_str_new2("Hello, World!");
}