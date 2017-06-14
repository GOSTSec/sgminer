#ifndef GOSTCOIN_H
#define GOSTCOIN_H

#include "miner.h"

extern int gostcoin_test(unsigned char *pdata, const unsigned char *ptarget,
			uint32_t nonce);
extern void gostcoin_regenhash(struct work *work);

#endif /* SIBCOIN_H */
