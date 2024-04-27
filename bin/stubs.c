#include <caml/mlvalues.h>
#include "../foreign/ex2.h"

void call_hello(value unit) {
  say_hello();
}
