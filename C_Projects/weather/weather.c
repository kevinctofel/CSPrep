#include <stdlib.h>
#include <stdio.h>

// 2d array
// total rainfall each year, average yearly rain and average monthly
// 5 years: 5 rows and 12 columns
// can be floating point data
// Table for year, sentence for yearly average and one row for monthly averages (one datapoint per month)

// for loop with inner loop to calculate yearly totals/averages. Another for monthly averages.

int main()
{
  float monthlyTotal;
  float annualTotal[5] = {0.0, 0.0, 0.0, 0.0, 0.0};
  float yearlyAverage[5] = {0.0, 0.0, 0.0, 0.0, 0.0};
  float monthlyAverage = 0.0;
  // [month, year]
  float rainfall[5][12] = {
      {3.2, 4.7, 6.2, 5.5, 3.8, 0.7, 0.4, 0.9, 2.1, 3.3, 4.4, 2.9},
      {3.1, 4.2, 5.0, 5.3, 4.0, 1.9, 0.9, 0.2, 1.6, 2.6, 3.2, 4.4},
      {3.0, 3.3, 3.9, 4.5, 5.8, 3.2, 1.1, 1.0, 0.8, 1.3, 2.7, 3.5},
      {3.2, 5.0, 4.8, 6.1, 6.2, 4.7, 2.1, 2.0, 1.7, 1.4, 3.5, 4.0},
      {3.5, 4.4, 5.5, 5.9, 7.1, 0.3, 0.1, 0.0, 0.7, 2.2, 3.0, 3.9}};

  // Set up table
  printf("Year\tRainfall (inches)\n");    

  for (int y = 0; y <= 4; y++)
  {
    monthlyTotal = 0;
    for (int m = 0; m <= 11; m++)
    {
      monthlyTotal += rainfall[y][m];
    }
    yearlyAverage[y] += monthlyTotal / 12;
    // printf("Yearly total for year is %.2f\n", monthlyTotal);
    printf("%i\t%.1f\n", y, monthlyTotal);
    
  }
  printf("The yearly average is: %.1f inches.\n", (yearlyAverage[0]+yearlyAverage[1]+yearlyAverage[2]+yearlyAverage[3]+yearlyAverage[4])*5);
}