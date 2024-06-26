#ifndef JADE_KEM_xwing_naive_amd64_c_avx2_API_H
#define JADE_KEM_xwing_naive_amd64_c_avx2_API_H

#include <stdint.h>

#define JADE_KEM_xwing_naive_amd64_c_avx2_PUBLICKEYBYTES   1216
#define JADE_KEM_xwing_naive_amd64_c_avx2_SECRETKEYBYTES   2464
#define JADE_KEM_xwing_naive_amd64_c_avx2_CIPHERTEXTBYTES  1120
#define JADE_KEM_xwing_naive_amd64_c_avx2_KEYPAIRCOINBYTES 96
#define JADE_KEM_xwing_naive_amd64_c_avx2_ENCCOINBYTES     64
#define JADE_KEM_xwing_naive_amd64_c_avx2_BYTES            32

#define JADE_KEM_xwing_naive_amd64_c_avx2_ALGNAME         "X-Wing-Naive"
#define JADE_KEM_xwing_naive_amd64_c_avx2_ARCH            "amd64"
#define JADE_KEM_xwing_naive_amd64_c_avx2_IMPL            "c-avx2"

int jade_kem_xwing_naive_amd64_c_avx2_keypair_derand(
  uint8_t *public_key,
  uint8_t *secret_key,
  const uint8_t *coins
);

int jade_kem_xwing_naive_amd64_c_avx2_keypair(
  uint8_t *public_key,
  uint8_t *secret_key
);

int jade_kem_xwing_naive_amd64_c_avx2_enc_derand(
  uint8_t *ciphertext,
  uint8_t *shared_secret,
  const uint8_t *public_key,
  const uint8_t *coins
);

int jade_kem_xwing_naive_amd64_c_avx2_enc(
  uint8_t *ciphertext,
  uint8_t *shared_secret,
  const uint8_t *public_key
);

int jade_kem_xwing_naive_amd64_c_avx2_dec(
  uint8_t *shared_secret,
  const uint8_t *ciphertext,
  const uint8_t *secret_key
);

#endif
