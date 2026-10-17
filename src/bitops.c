#include "../include/bitops.h"

// 1. SET BIT: Force the bit to 1 using OR (|)
void set_bit(uint32_t *num, uint8_t pos) {
    *num |= (1U << pos);
}

// 2. CLEAR BIT: Force the bit to 0 using AND (&) and NOT (~)
void clear_bit(uint32_t *num, uint8_t pos) {
    *num &= ~(1U << pos);
}

// 3. TOGGLE BIT: Flip the bit using XOR (^)
void toggle_bit(uint32_t *num, uint8_t pos) {
    *num ^= (1U << pos);
}

// 4. CHECK BIT: Shift right and AND with 1
uint8_t check_bit(uint32_t num, uint8_t pos) {
    return (num >> pos) & 1U;
}

// 5. COUNT SET BITS: Brian Kernighan's Algorithm
uint8_t count_set_bits(uint32_t num) {
    uint8_t count = 0;
    while (num) {
        num &= (num - 1); // This clears the lowest set bit
        count++;
    }
    return count;
}