#include "notrandombytes.h"
#include "notrandombytes1.h"

void __jasmin_syscall_randombytes__(uint8_t *x, uint64_t xlen)
__asm("__jasmin_syscall_randombytes__");
void __jasmin_syscall_randombytes__(uint8_t *x, uint64_t xlen)
{
  notrandombytes(x,xlen);
}


