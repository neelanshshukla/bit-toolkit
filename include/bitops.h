#ifndef BITOPS_H
#define BITOPS_H

#include <stdint.h>

// Set the bit at position 'pos' to 1
void set_bit(uint32_t *num, uint8_t pos);

// Clear the bit at position 'pos' to 0
void clear_bit(uint32_t *num, uint8_t pos);

// Toggle (flip) the bit at position 'pos'
void toggle_bit(uint32_t *num, uint8_t pos);

// Check if the bit at position 'pos' is 1 (returns 1) or 0 (returns 0)
uint8_t check_bit(uint32_t num, uint8_t pos);

// Count how many bits are set to 1 in the number
uint8_t count_set_bits(uint32_t num);

#endif // BITOPS_H