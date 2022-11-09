#include <stdio.h>

#include "api.h"
#include "namespace.h"

int main(void)
{
  printf("{\n");
  printf(" \"CRYPTO_BYTES\": %u,\n", NAMESPACE(BYTES));
  printf(" \"CRYPTO_KEYBYTES\": %u,\n", NAMESPACE(KEYBYTES));

  printf(" \"CRYPTO_ALGNAME\": \"%s\",\n", NAMESPACE(ALGNAME));
  printf(" \"CRYPTO_ARCH\": \"%s\",\n", NAMESPACE(ARCH));
  printf(" \"CRYPTO_IMPL\": \"%s\"\n}\n", NAMESPACE(IMPL));

  return 0;
}
