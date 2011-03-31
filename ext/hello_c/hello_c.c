#include "ruby.h"

VALUE HelloC;
VALUE hello_world(VALUE self);

VALUE hello_world(VALUE self)
{
    return rb_str_new2("Hello, World!");
}

void Init_hello_c()
{
    HelloC = rb_define_class("HelloC", rb_cObject);
    rb_define_method(HelloC, "world", hello_world, 0);
}
