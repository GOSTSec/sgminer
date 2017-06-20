#ifndef SIBCOIN_MOD_CL
#define SIBCOIN_MOD_CL

__attribute__((reqd_work_group_size(WORKSIZE, 1, 1)))
__kernel void search(__global const uint2*restrict in, __global uint*restrict output)
{
}

#endif
