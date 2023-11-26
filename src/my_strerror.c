#include "my_string.h"

char *my_strerror(int errnum) {
  char *error;
  if(errnum == 0)
    error = "Undefined error: 0";
  if(errnum == 1)
    error = "Operation not permitted";
  if(errnum == 2)
    error = "No such file or directory";
  if(errnum == 3)
    error = "No such process";
  if(errnum == 4)
    error = "";
}
