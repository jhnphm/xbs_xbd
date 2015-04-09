#include "crypto_hash.h"
#include "XBD_commands.h"

#define CRYPTO_HASH_TYPE 0x1
#define EBASH_TYPE CRYPTO_HASH_TYPE

#define MAX_MSG_LEN 2048
#define MAX_OUTPUT_LEN 128

#define XBD_OPERATION_TYPE CRYPTO_HASH_TYPE
#define XBD_PARAMLENG_MAX (MAX_MSG_LEN)
#define XBD_RESULTLEN (NUMBSIZE+MAX_OUTPUT_LEN)
