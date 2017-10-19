#include "config.h"
#include "miner.h"
#include "sph/sph_gost.h"

#include <stdlib.h>
#include <stdint.h>
#include <string.h>

void gostcoin_regenhash(struct work *work)
{
	 uint32_t data[20];
     be32enc_vect(data, (const uint32_t *)work->data, 20);

     unsigned char h1[64], h2[32];
	 sph_gost512(h1, (const void*)data, 80);
	 sph_gost256(h2, (const void*)h1, 64);
	 
	 int i;	
	 for (i = 0 ; i < 32; i++) work->hash[i] = h2[31-i];
}
