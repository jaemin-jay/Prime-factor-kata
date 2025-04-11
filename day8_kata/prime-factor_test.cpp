#include "gmock/gmock.h"
#include "prime-factor.cpp"

#include <vector>


TEST(PrimeFactors, Of1) {
	PrimeFactor prime_factor;
	std::vector<int> expected = {};

	EXPECT_EQ(expected, prime_factor.of(1));
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}