#include "ruby.h"

VALUE hello_world(VALUE self)
{
    return rb_str_new2("Hello, World!");
}

VALUE Hello;

void Init_hello()
{
    Hello = rb_define_class("Hello", rb_cObject);
    rb_define_method(Hello, "world", hello_world, 0);
}