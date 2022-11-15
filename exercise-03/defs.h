#include <iostream>
#include <vector>

#ifndef DEFS
#define DEFS

/**
  [PL] Funkcja wypisuje "Hello world!".
  [EN] The function prints "Hello world!".
 */

void hello_world();

/**
  [PL] Funkcja neguje podaną liczbę całkowitą.
  [EN] The function negates an integer.

  @param n    liczba do zanegowania  | a number to negate
  @return     zanegowana liczba      | negated number 
 */

int negate (const int n);

/**
  [PL] Funkcja dodaje dwie liczby zmiennoprzecinkowe. 
  [EN] The function adds two floating point numbers.

  @param a
  @param b  liczby do dodania | numbers to add
  @return a + b
 */

double sum (const double a, const double b);

/**
  [PL] Funkcja wyznacza maksimum podanych pięciu liczb. 
  [EN] The function elaborates maximum of five numbers.
  @param a, b, c, f, e  
  @return maksimum z a, b, c, f, e | maximum of a, b, c, f, e 
 */

double max_of_5 (const double a, const double b, const double c, const double d, const double e);

/**
  @return [PL] maksimum z wartości w tablicy 
  [EN] maximum of values in an array
  @param  p    [PL] tablica | [EN] array 
  @param  n    [PL] rozmiar tablicy | [EN] size of an array
 */

double max_array (const double p[], const int n);

/**
  @return [PL] maksimum z wartości w wektorze 
  [EN] maximum of values in a vector
  @param  v    [PL] wector | [EN] vector 
 */

double max_vector (const std::vector<double> & v);

/**
  [PL] Funkcja tworzy wektor liczb losowych. 
  [EN] The function creates a vector of random numbers.
  @param n      długość wektora               | size of an vector
  @param mini   minimalna wartość w wektorze  | minimal value in a vector
  @param maxi   maksymalna wartość w wektorze | maximal value in a vector
  @return [PL] wektor o długości n zawierający liczby losowe z przedziału [mini, maxi]
  [EN] a vector of n random numbers from interval [mini, maxi]
 */

std::vector<double> random_vector(const int n, const double mini, const double maxi);

/**
  [PL] Funkcja wypisuje wektor. 
  [EN] The function prints a vector.
  @param w   wektor do wypisania | a vector to print
 */
void print (const std::vector<double> & w);


/**
  [PL] Funkcja wypisuje tablicę.
  [EN] The function prints an array.
  @param arr   tablica         | an array
  @param n     rozmiar tablicy | size of an array 
 */

void print (const double arr[], const int n);

/**
  [PL] Funkcja odwraca kolejność elementów tablicy. 
  [EN] The function reverses an array.
  @param arr   tablica         | an array
  @param n     rozmiar tablicy | size of an array 
 */

void reverse (double arr[], const int n);

/**
  [PL] Funkcja filtruje wartości, które są w podanym przedziale. 
  [EN] The function filter values that are withing an interval.
  @param w     wektor wartości         | a vector of values
  @param mini  lewy koniec przedziału  | left end of an interval
  @param maxi  prawy koniec przedziału | right end of an interval
  @return      wektor z przefiltrowanymi wartościami | vector with filtered values
 */

std::vector<double> filter (const std::vector<double> & w, const double mini, const double maxi);

/**
  [PL] Funkcja sortuje wektor.
  [EN] The function sorts a vector.
  @param[out] w  wektor do posortowania | a vector to sort
 */

void sort(std::vector<double> & w);

/**
  [PL] Funkcja zakrągla wartość do liczby całkowitej. Wartość z przedziału [n - 0.5, n + 0.5) jest zaakrąglana do n, gdzie n jest liczbą całkowią. 
  [EN] The function rounds a value to an integer. A value from interval [n - 0.5, n + 0.5) is rounded to n, where n is an integer.
  @param w  wartość do zaokrąglenia | a value to be rounded
  @return   zaokrąglona wartość     | a rounded value
 */

int Round(const double d);


/**
  [PL] Funkcja zaokrągla każdą wartość w wektorze do wartości całkowitej. Wartości z przedziału [n - 0.5, n + 0.5) są zaakrąglane do n, gdzie n jest liczbą całkowią. 
  [EN] The function rounds each value in a vector to an integer. Values from interval [n - 0.5, n + 0.5) are rounded to n, where n is an integer.
  @param w  wektor z liczbami do zaokrąglenia | a vector with values to round
  @return   wektor z zaokrąglonymi liczbami   | a vector with rounded values
 */
std::vector<int> Round(const std::vector<double> & w);


/**
  [PL] Funkcja wypisuje wektor. 
  [EN] The function prints a vector.
  @param w   wektor do wypisania | a vector to print
 */
void print (const std::vector<int> & w);

/**
  [PL] Funkcja usuwa powtarzające się elementy w posortowanym wektorze.
  [EN] The function deletes repeating elements from a sorted vector.
  @param w   posortowany wektor liczb całkowitych | a sorted vector of integers
  @return    wektor z unikalnymi wartościami      | a vector of unique integers
 */

std::vector<int> unique (const std::vector<int> & w);

#endif