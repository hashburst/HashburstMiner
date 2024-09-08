#ifndef ARGON2_XOP_H
#define ARGON2_XOP_H

#include "core.h"

void HashburstMiner_ar2_fill_segment_xop(const argon2_instance_t *instance, argon2_position_t position);
int HashburstMiner_ar2_check_xop(void);

#endif // ARGON2_XOP_H
