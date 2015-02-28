/* 
 * File:   QuicksortTest.cpp
 * Author: Orillion
 *
 * Created on Feb 28, 2015, 10:03:23 AM
 */

#include <stdlib.h>
#include <iostream>
#include <algorithm>
#include <vector>

#include "quicksort.h"

void testQuicksort() {
	int A[] = {1, 4, 3, 2, 5};
	int answer[] = {1, 2, 3 ,4, 5};
	std::vector<int> answerVector(answer, answer + 5);
	int low = 0;
	int high = 4;
	quicksort(A, low, high);
	if (std::equal(answerVector.begin(), answerVector.end(), A)) {
		std::cout << "%TEST_PASSED%" << std::endl;
	} else {
		std::cout << "%TEST_FAILED%" << std::endl;
	}
}

int main(int argc, char** argv) {
	std::cout << "%SUITE_STARTING% QuicksortTest" << std::endl;
	std::cout << "%SUITE_STARTED%" << std::endl;

	std::cout << "%TEST_STARTED% testQuicksort (QuicksortTest)" << std::endl;
	testQuicksort();
	std::cout << "%TEST_FINISHED% time=0 testQuicksort (QuicksortTest)" << std::endl;

	std::cout << "%SUITE_FINISHED% time=0" << std::endl;

	return (EXIT_SUCCESS);
}

