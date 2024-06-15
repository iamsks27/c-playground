#include <stdio.h>

/*
    print Fahrenheit-Celsius table
    for fahr = 0, 20, 40, ..., 300
*/

int main(void) {

  int fahr, celsius;

  int lower, upper, step;

  lower = 0;   // lower limit of the tempature table
  upper = 300; // upper limit of the tempature table
  step = 20;   // step size

  fahr = lower;
  while (fahr <= upper) {
    // execution is based on operator precedence & associativity
    celsius = 5 * (fahr - 32) / 9;
    /**
     * Execution steps:
     * 1. val <- (fahr - 32) :: will be executed first: Highest precedence
     * 2. expression will become something like: celsius = 5 * val / 9
     * 3. Since * and / are at the same precendence, associativity will decide
     * the execution flow, which will be left to right
     * 4. So, val2 <- 5 * val
     * 5. expression will become something like: celsius = val2 / 9
     * 6. lastly, the result of division will be assigned to celsius.
     * 7. Note: The division, multiplication & subtraction,
     *    all are happening between integers, the result will also be integer
     *    & if there are any fractions, it will be truncated.
     * Check: https://en.cppreference.com/w/c/language/operator_precedence
     */

    // since 5 & 9 both are integers, 5/9 would be truncated to zero
    // and so all the celsius temperatures would be reported to zero.
    // For e.g.,  celsius = 5 / 9 * (fahr - 32) -> will result to zero.
    printf("%3d\t%3d\n", fahr, celsius);
    fahr += step;
  }

  return 0;
}
