#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
// Flip the bits of x within range [start, end], in which both are inclusive.
// Assume 0 <= start & end <= 31
void flip_bits(    unsigned * x,
                  unsigned start,
                  unsigned end);

/*
 * Tests that two arrays of size <size> are equal. Equal meaning that all the
 * elements in the arrays are equal.
 */
int array_equals(unsigned *arr1,
        unsigned *arr2,
        unsigned size) {

   int i;
   for (i = 0; i < size; i++) {
       if (arr1[i] != arr2[i]) {
           return 0;
       }
   }

   return 1;
}

/*
 * Prints an unsigned array as a bit string. This assumes that each integer
 * is only 0 or 1.
 */
void print_unsigned_array(unsigned *arr1,
                unsigned size) {

    printf("0b");
    unsigned i;
    for (i = 0; i < size; i++) {
        printf("%u", arr1[i]);
    }
}

void test_flip_bits(unsigned x,
                   unsigned s,
           unsigned e,
                   unsigned expected) {
    unsigned o = x;
    flip_bits(&x, s, e);
    if(x!=expected) {
        printf("flip_bits(0x%08x,%u,%u): 0x%08x, expected 0x%08x\n",o,s,e,x,expected);
        assert(0);
    } else {
        printf("flip_bits(0x%08x,%u,%u): 0x%08x, correct\n",o,s,e,x);
    }
}