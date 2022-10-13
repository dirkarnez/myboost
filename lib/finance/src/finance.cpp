#include "finance.h"

#include <iostream>

// Type your code here, or load an example.
constexpr long double power(long double base, unsigned int exponent) {
    long double internal = 1;
    for (unsigned int i = 0; i < exponent; i++){
        internal *= base;
    }
    return internal;
}

constexpr long double calculate_future_value_compounded(long double present_value, unsigned int annual_precentage_rate_precentage, unsigned int nth_year)
{
  return present_value * power((1 + (annual_precentage_rate_precentage / 100.0)), nth_year);
}

constexpr long double calculate_future_value_single(long double present_value, unsigned int annual_precentage_rate_precentage, unsigned int nth_year)
{
  return present_value * (1 + ((annual_precentage_rate_precentage / 100.0) * nth_year));
}

int main()
{
    constexpr long double captial = 10000;
    const long double a = calculate_future_value_compounded(captial, 5, 3);  //10000*1.05*1.05*1.05 = 11576.25
    const long double b = calculate_future_value_single(captial, 5, 3); //10000*(1 + (0.05 * 3)) = 11500
    std::cout << a << std::endl;
    std::cout << b << std::endl; 
}
