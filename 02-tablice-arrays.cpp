/*
	PODSTAWY PROGRAMOWANIA KOMPUTEROW
	FUNDAMENTALS OF COMPUTER PROGRAMMING

	tablice  
	arrays
 */

#define debug(x)  std::cerr << "(" << __LINE__ << ") " << #x << " == " << (x) << std::endl

#include <iostream>  
#include <chrono>
#include <random>

int main ()
{
	const int N {10};

	///////////////////////////////////////
	std::cout << "[PL] Proszę napisać fragment kodu, który wypełni tablicę o rozmiarze const int N wartościami od 1 do N." << std::endl;		
	std::cout << "[EN] Implement a piece of code that fills an array (whose size is const int N) with value 1 to N.)" << std::endl;


	///////////////////////////////////////
	std::cout << std::endl;
	std::cout << "========================" << std::endl;  
	std::cout << std::endl;

	std::cout << "[PL] Proszę napisać fragment kodu, który wypełni tablicę o rozmiarze const int N wartościami od N do 1." << std::endl;
	std::cout << "[EN] Fill an array (whose size is const int N) with values N down to 1." << std::endl;



	///////////////////////////////////////
	std::cout << std::endl;
	std::cout << "========================" << std::endl;  
	std::cout << std::endl;

	std::cout << "[PL] Proszę napisać fragment kodu, który wypełni tablicę o rozmiarze const int N kwadratami wartości od N do 1." << std::endl;
	std::cout << "[EN] Fill an array (whose size is const int N) with squares of values N down to 1." << std::endl;



	///////////////////////////////////////
	std::cout << std::endl;
	std::cout << "========================" << std::endl;  
	std::cout << std::endl;

	std::cout << "[PL] Proszę napisać fragment kodu, który wypełni tablicę o rozmiarze const int N wartościami losowymi." << std::endl;
	std::cout << "[EN] Fill an array (whose size is const int N) with random values." << std::endl;

	const int MAX {50};
	std::default_random_engine engine;
	engine.seed(std::chrono::system_clock::now().time_since_epoch().count());
	std::uniform_int_distribution<int> distro {0, MAX - 1};




	///////////////////////////////////////


	std::cout << "[PL] Proszę napisać fragment kodu, który znajdzie w tablicy o rozmiarze const int N wartość minimalną." << std::endl;
	std::cout << "[EN] Find the minimal value in an array (whose size is const int N)." << std::endl;


	std::cout << "[PL] Proszę dopisać kod, który zamieni miejscami wartość minimalną w wartością z pierwszej komórce tablicy." << std::endl;
	std::cout << "[EN] Add some code to swap the minimal value with the first value in the array.." << std::endl;



	std::cout << "[PL] Proszę dodać objąć dotychczasowy kod pętlą w ten sposób, żeby w j-tej iteracji wyszukiwać minimum w tablicy od pozycji j-tej do końca, a następnie zamieni miejscami znalezione minimum z zawartością komórki j-tej. W ten sposób uzyskamy algorytm sortowania." << std::endl;
	std::cout << "[EN] Put the code above into a loop so that in the j-th iteration the minimum is searched for from the j-th cell up to the end of the array. Then swap the minimum with the j-th cell. This produced a simple sorting algorithm." << std::endl;






	///////////////////////////////////////
	std::cout << std::endl;
	std::cout << "========================" << std::endl;  
	std::cout << std::endl;
	std::cout << "[PL] Mamy dwie tablice: tablicę A o rozmiarze const int N zawierającą wartości od 0 do MAX - 1 i tablicę L  o rozmiarze MAX. Proszę napisać kod, który policzy wystąpienia wartości w tablicy A i zapisze w odpowiednie miejsce tablicy L. To znaczy: komórka i-ta tablicy L zawiera liczbę wystąpień wartości i w tablicy A." << std::endl;
	std::cout << "[EN] We have two array: A (with size const int N) that hold values from 0 to MAX - 1, and L (with size MAX). Count occurences of each value in A and put the results in L, eg.: the i-th cell of L holds number of occurences of value i in A." << std::endl;



	///////////////////////////////////////
	std::cout << std::endl;
	std::cout << "========================" << std::endl;  
	std::cout << std::endl;

	std::cout << "[PL] Mamy dwie tablice: tablicę A o rozmiarze const int N zawierającą pewne wartości i tablicę B o takim samym rozmiarze. Proszę napisać kod, który skumuluje wartości tablicy A i zapisze wynik w tablicy B. To znaczy: komórka i-ta tablicy B zawiera sumę wartości komórek A[0], A[1], …, A[i]." << std::endl;
	std::cout << "[EN] We have two array: A (whose size is const int N) that holds some values, and B (as long as A). Cummulate value in A and put the results in B, eg: the i-th cell of B holds sum of A[0], A[1], …, A[i]." << std::endl;




	///////////////////////////////////////
	std::cout << std::endl;
	std::cout << "========================" << std::endl;  
	std::cout << std::endl;


	std::cout << "[PL] Proszę napisać fragment kodu, który wypełni dwuwymiarową tablicę o W wierszach i K kolumnach kolejnymi wartościami od 1 do N * K." << std::endl;
	std::cout << "[EN] Fill a two-dimensional array with W rows and K columns with consecutive values 1 to N * K." << std::endl;

	const int W { 5 };
	const int K { 8 };

	int a2d [W][K]; 


	///////////////////////////////////////
	std::cout << std::endl;
	std::cout << "========================" << std::endl;  
	std::cout << std::endl;

	std::cout << "[PL] Proszę napisać fragment kodu, który wypełnia dwuwymiarową tablicę o rozmiarach const int W x const int K kolejnymi liczbami bustrofedonem." << std::endl;
	std::cout << "[EN] Fill a two-dimensional array with W rows and K columns with a bustrophedon." << std::endl;


	///////////////////////////////////////
	std::cout << std::endl;
	std::cout << "========================" << std::endl;  
	std::cout << std::endl;

	std::cout << "[PL] Proszę napisać fragment kodu, który wypełnia dwuwymiarową tablicę o rozmiarach const int W x const int K kolejnymi liczbami na ukos."  << std::endl;
	std::cout << "[EN] Fill a two dimensional array with W rows and K columns with consecutive numbers diagonally."  << std::endl;
	std::cout << 
		R"(Example:
 1   2   4   7  11  16  21  26  
 3   5   8  12  17  22  27  31  
 6   9  13  18  23  28  32  35  
10  14  19  24  29  33  36  38  
15  20  25  30  34  37  39  40 
)" << std::endl;



		return 0;

}
