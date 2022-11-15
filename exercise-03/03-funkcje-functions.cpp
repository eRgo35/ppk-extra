/*
	PODSTAWY PROGRAMOWANIA KOMPUTEROW
	FUNDAMENTALS OF COMPUTER PROGRAMMING

	funkcje
	functions  
 */

#define debug(x)  std::cerr << "(" << __LINE__ << ") " << #x << " == " << (x) << std::endl

#include <iostream>  
#include <vector>
#include <chrono>
#include <random>
#include "defs.h"
#include "funcs.cpp"

/////////////////////////////////////////////
int main ()
{
	hello_world();

	for (int i : { 3, 6, 8, 45, -4, -9, 065, -0xad, 0b011101101 })
		std::cout << negate(i) << " ";
	std::cout << std::endl;

	std::cout << sum (3.14, 7.54) << std::endl;

	std::cout << max_of_5 (-5, 6.7, 2.34, 23.64, -234.5) << std::endl;

	const int N { 5 };
	double arr [N] {-5.45, 53.5, -765, 57.6, 0.34};

	std::cout << max_array (arr, N) << std::endl;

	std::vector<double> v {5.45, -53.5, -765, 75.6, 0.34};

	std::cout << max_vector (v) << std::endl;

	auto w = random_vector(10, -5.5, 5.5);

	print (w);

	print (arr, N);
	reverse (arr, N);
	print (arr, N);

	print (w);
	auto filtered = filter(w, -2.5, 2.5);
	print (filtered);

	print (w);
	sort(w);
	print(w);

	for (double d = 1.0; d <= 2.0; d += 0.1)
		std::cout << "round(" << d << ") == " << Round(d) << std::endl;

	auto r = Round (w);
	print (r);
	auto u = unique (r);
	print (u);

	return 0;
}
