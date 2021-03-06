#ifndef _USE_FLAGS_H_
#define _USE_FLAGS_H_

#define MAX_PRODUCTS 500
#define MAX_PRODUCT_NAME_LENGTH 128

struct flags_struct
{
  char detached[MAX_PRODUCTS][MAX_PRODUCT_NAME_LENGTH];
  char used[MAX_PRODUCTS][MAX_PRODUCT_NAME_LENGTH];
  int about;
  int detached_found[MAX_PRODUCTS];
  int items_detached;
  int items_used;
  int list;
  int no_ld_library_path;
  int no_manpath;
  int no_path;
  int no_xfilesearchpath;
  int pretend;
  int quiet;
  int shell_type;
  int used_found[MAX_PRODUCTS];
};

#endif
