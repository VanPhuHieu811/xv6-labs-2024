#include "kernel/types.h"
#include "kernel/sysinfo.h"
#include "user/user.h"
#include "kernel/stat.h"

int
main(int argc, char *argv[])
{
  struct sysinfo si;
  if(sysinfo(&si) < 0){ 
    printf("sysinfotest: sysinfo failed\n");
    exit(1);
  }
  printf("freemem     %d\n", (int)si.freemem);
  printf("nproc       %d\n", (int)si.nproc);
  printf("nopenfiles  %d\n", (int)si.nopenfiles);
  exit(0);
}
