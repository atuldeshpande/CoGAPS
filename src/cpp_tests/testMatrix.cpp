#include "catch.h"
#include "../Matrix.h"

#include <algorithm>
#include <cmath>

TEST_CASE("Test Matrix.h")
{
    double row1[3] = { 1.0,  2.0,  3.0};
    double row2[3] = {-4.0,  5.0, -6.0};
    double row3[3] = { 7.0, -8.0,  9.0};

    std::vector< std::vector<double> > data;
    data.push_back(std::vector<double>(row1, row1 + 3));
    data.push_back(std::vector<double>(row2, row2 + 3));
    data.push_back(std::vector<double>(row3, row3 + 3));
    
    Matrix testMat (data, 'A');
    REQUIRE(testMat.cal_mean() == 1.0);
    REQUIRE(testMat.cal_totalsum() == 9.0);
}
