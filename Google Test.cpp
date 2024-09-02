#include <vector>
#include "gtest/gtest.h"

std::vector<int> increaseVectorElements(std::vector<int> vec, int n) {
  for (auto& element : vec) {
    element += n;
  }
  return vec;
}

TEST(IncreaseVectorElementsTest, EmptyVector) {
  std::vector<int> emptyVector;
  std::vector<int> expectedEmptyVector;
  ASSERT_EQ(increaseVectorElements(emptyVector, 5), expectedEmptyVector);
}

TEST(IncreaseVectorElementsTest, NonEmptyVector) {
  std::vector<int> inputVector = {1, 2, 3, 4, 5};
  std::vector<int> expectedVector = {6, 7, 8, 9, 10};
  ASSERT_EQ(increaseVectorElements(inputVector, 5), expectedVector);
}

TEST(IncreaseVectorElementsTest, NegativeIncrement) {
  std::vector<int> inputVector = {1, 2, 3, 4, 5};
  std::vector<int> expectedVector = {-4, -3, -2, -1, 0};
  ASSERT_EQ(increaseVectorElements(inputVector, -5), expectedVector);
}
