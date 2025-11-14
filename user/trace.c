#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  if(argc < 3){
    fprintf(2, "Usage: trace mask command [args...]\n");
    exit(1);
  }

  int mask = atoi(argv[1]);   // chuyển chuỗi argv[1] thành số nguyên
  trace(mask);                // bật chế độ trace với mask

  // chạy chương trình được chỉ định (argv[2]) với các tham số còn lại
  exec(argv[2], &argv[2]);
  fprintf(2, "exec %s failed\n", argv[2]);
  exit(1);
}