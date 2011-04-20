#include "ruby.h"

VALUE hello_world(VALUE self)
{
    return rb_str_new2("Hello, World!");
}

void Init_hello()
{
    VALUE Hello = rb_define_class("Hello", rb_cObject);
    rb_define_method(Hello, "world", hello_world, 0);
}
