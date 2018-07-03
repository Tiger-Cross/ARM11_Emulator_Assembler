/*
 *  This file defines the bit ranges for specific bit groups in instructions.
 */

#ifndef DECODE_H
#define DECODE_H

#include <assert.h>
#include <stdio.h>
#include "../utils/arm.h"
#include "../utils/instructions.h"
#include "../utils/bitops.h"
#include "../utils/error.h"

// GENERAL INSTRUCTION DEFINITIONS
#define COND_START 31

#define INSTR_TYPE_START 27
#define INSTR_TYPE_END 25

#define A_FLAG 21
#define S_FLAG 20

#define I_FLAG 25
#define P_FLAG 24
#define U_FLAG 23
#define L_FLAG 20


// DP DEFINITIONS
#define OPCODE_START 24

#define DP_RN_START 19

#define DP_RD_START 15


// MUL DEFINITIONS
#define MUL_RD_START 19

#define MUL_RN_START 15

#define REG_S_START 11

#define MUL_TYPE_START 7
#define MUL_TYPE_END 4

#define REG_M_START 3

#define OP_START 11
#define OP_IMM_START 7
#define OP_SHIFTBY_FLAG 4
#define OP_SHIFT_TYPE_START 6
#define OP_SHIFT_TYPE_END 5


// SDT DEFINITIONS
#define SDT_RN_START 19

#define SDT_RD_START 15

int decode_word(instruction_t *instr, word_t word);

#endif
