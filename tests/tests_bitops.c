#include <stdio.h>
#include <assert.h>
#include "../include/bitops.h"

int main() {
    printf("-------Starting Bit Toolkit Tests................\n\n");

    // Start with a clean number: 0 (All bits are 0)
    uint32_t reg = 0;

    // --- Test 1: set_bit ---
    set_bit(&reg, 0); // Set bit 0 (the rightmost bit)
    assert(reg == 1); // Should be 0001 (which is 1)
    
    set_bit(&reg, 3); // Set bit 3
    assert(reg == 9); // Should be 1001 (which is 9)
    printf("set_bit passed!\n");

    // --- Test 2: clear_bit ---
    clear_bit(&reg, 0); // Clear bit 0
    assert(reg == 8);   // Should be 1000 (which is 8)
    printf("clear_bit passed!\n");

    // --- Test 3: toggle_bit ---
    toggle_bit(&reg, 3); // Toggle bit 3 (it was 1, should become 0)
    assert(reg == 0);    // Should be 0000 (which is 0)
    printf("toggle_bit passed!\n");

    // --- Test 4: check_bit ---
    set_bit(&reg, 2); // Set bit 2. reg is now 0100 (4)
    assert(check_bit(reg, 2) == 1); // Bit 2 is 1
    assert(check_bit(reg, 1) == 0); // Bit 1 is 0
    printf("check_bit passed!\n");

    // --- Test 5: count_set_bits ---
    // reg is currently 0100 (has one '1'). Let's test with a fresh number.
    uint32_t test_num = 0b10110; // Binary for 22 (three '1's)
    assert(count_set_bits(test_num) == 3);
    assert(count_set_bits(0) == 0);
    printf("count_set_bits passed!\n");

    printf("\nALL TESTS PASSED SUCCESSFULLY!\n");
    return 0;
}