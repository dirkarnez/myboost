#include "finance.h"

#include <iostream>
#include <cmath>

constexpr long double calculate_future_value_compounded(long double present_value, unsigned int annual_precentage_rate_precentage, unsigned int nth_year)
{
  return present_value * std::pow((1 + (annual_precentage_rate_precentage / 100.0)), nth_year);
}

constexpr long double calculate_future_value_single(long double present_value, unsigned int annual_precentage_rate_precentage, unsigned int nth_year)
{
  return present_value * (1 + ((annual_precentage_rate_precentage / 100.0) * nth_year));
}

int main()
{
    constexpr long double captial = 10000;
    std::cout << calculate_future_value_compounded(captial, 5, 3) << std::endl; //10000*1.05*1.05*1.05 = 11576.25
    std::cout << calculate_future_value_single(captial, 5, 3) << std::endl; //10000*(1 + (0.05 * 3)) = 11500
}
