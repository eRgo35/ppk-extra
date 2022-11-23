/*
  PODSTAWY PROGRAMOWANIA KOMPUTEROW
  FUNDAMENTALS OF COMPUTER PROGRAMMING

  strumienie
  streams
 */

#define debug(x) std::cerr << "(" << __LINE__ << ") " << #x << " == " << (x) << std::endl

#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <vector>
#include <chrono>
#include <random>

// random engine is set up as global to always get seeded random numbers
std::default_random_engine gen;
std::uniform_real_distribution<double> dist(0.0, 100.0);

double random_value();

void generate_students(const std::string &name);

std::vector<double> get_random_vector(size_t size);

void save(std::vector<double> vec, std::string file_name);

void print(std::string file_name);

void reverse(std::string file_name);

double get_average_number(std::string file_name);

void create_square_matrix(size_t size, std::string matrix_file);

void print_matrix(std::string matrix_file);

double elaborate_trace(std::string matrix_file);

double find_average(std::string data_file);

void find_the_best_student(std::string data_file, std::string &f_name, std::string &s_name, std::string &surname, double &grade);

/////////////////////////////////////////////
int main()
{
  int size{3};

  /*
    [PL] Funkcja zwraca losowa wartosc typu double.
    [EN] The function returns a random double value.
   */
  std::cout << random_value() << std::endl;

  /*
    [PL] Fukcja zwraca wektor losowych wartosci o dlugosci podanej jako parametr.
    [EN] The function returns a vector (whose size is a paramter of the function)  of random values.
   */
  std::vector<double> numbers = get_random_vector(size);

  /*
    [PL] Funkcja zapisuje wektor do pliku.
    [EN] The function prints a vector to a file
   */
  const std::string FILE_NAME{"numbers.txt"};
  save(numbers, FILE_NAME);

  /*
    [PL] Funkcja pisze na ekranie wartosci zawarte w pliku.
    [EN] The function prints on the screen values held in a file.
   */
  std::cout << "values from file: " << FILE_NAME << std::endl;
  print(FILE_NAME);

  /*
    [PL] Funkcja odwraca kolejnosc liczb w pliku.
    [EN] The number reverses the sequence of numbers in a file
   */
  reverse(FILE_NAME);

  std::cout << "values from file: " << FILE_NAME << std::endl;
  print(FILE_NAME);

  /*
    [PL] Funkcja wyznacza i zwraca srednia liczb z pliku.
    [EN] The function elaborates and returns an average of numbers in a file
   */
  double average = get_average_number(FILE_NAME);
  std::cout << "average: " << average << std::endl;

  /*
    [PL] Funkcja tworzy losowa macierz kwadratowa i zapisuje ja do pliku.
    [EN] The function creates a random square matrix and saves it in a file.
   */
  std::string matrix_file{"matrix.txt"};
  create_square_matrix(size, matrix_file);

  /*
    [PL] Funkcja wypisuje macierz z pliku na ekran.
    [EN] The function prints on the screen a matrix from a file.
   */
  std::cout << std::endl;
  std::cout << "matrix" << std::endl;
  print_matrix(matrix_file);

  std::cout << std::endl;

  /*
    [PL] Funkcja wyznacza i zwraca slad macierzy z pliku.
    [EN] The function elaborates and returns a trace of a matrix in a file.
   */
  double trace = elaborate_trace(matrix_file);
  std::cout << "trace " << trace << std::endl;

  std::cout << std::endl;
  /*
    [PL] Plik zawiera dane studentow: imie, drugie imie, nazwisko i ocene koncowa, np.
    Inga	Luiza	Wlodarczyk	4.19
    Kazda linia zawiera jeden wpis.
    [EN] The file holds student data: first name, second name, last name, and final grade, eg.
    Inga	Luiza	Wlodarczyk	4.19
    Each line holds one entry.
   */
  const std::string DATA_FILE{"data.txt"};
  generate_students(DATA_FILE);

  /*
    [PL] Funkcja wyznacza i zwraca srednia ocen studentow z pliku.
    [EN] The function elaborates and return an average of student's grades from the file.
   */

  double average_grade = find_average(DATA_FILE);
  std::cout << "average grade of all students: " << find_average(DATA_FILE) << std::endl;

  std::string f_name, s_name, surname;
  double grade = 0.0;

  /*
    [PL] Funkcja przekazuje przez parametry imiona, nazwisko i ocene najlepszego studenta z pliku. Najlepszy student to ten z najwyzsza ocena. Jezeli w pliku jest kilku studentow z ta sama najwyzsza ocena, funkcja przekazuje dane ktoregokolwiek z nich.
    [EN] The function returns (in paramters!) first and second name, surname, and grade of the best students in the file. The best student is one with the highest grade. If several students have the same maximal grade, the function returns (in paramters!) any of them.
   */
  find_the_best_student(DATA_FILE, f_name, s_name, surname, grade);
  std::cout << "the best student: " << f_name << " " << s_name << " " << surname << " " << grade << std::endl;

  return 0;
}

///////////////////////////////
double random_value()
{
  return dist(gen);
}

std::vector<double> get_random_vector(size_t size)
{
  std::vector<double> vec;
  for (size_t i = 0; i < size; i++)
    vec.push_back(random_value());
  return vec;
}

void save(std::vector<double> vec, std::string file_name)
{
  std::ofstream file(file_name);
  if (file)
    for (double num : vec)
      file << num << std::endl;
}

void print(std::string file_name)
{
  double num;
  std::ifstream file(file_name);
  while (file >> num)
    std::cout << num << std::endl;
}

void reverse(std::string file_name)
{
  // loading data into a vector
  std::vector<double> nums;
  double num;
  std::ifstream file(file_name);
  while (file >> num)
    nums.push_back(num);

  // reverse operation
  std::vector<double> vec;
  size_t i = nums.size();
  while (i > 0)
    vec.push_back(nums.at(--i));

  // save data to file
  save(vec, file_name);
}

double get_average_number(std::string file_name)
{
  double sum = 0;
  int i = 0;
  double num;
  std::ifstream file(file_name);
  while (file >> num)
  {
    sum += num;
    i++;
  }

  return sum / i;
}

void create_square_matrix(size_t size, std::string matrix_file)
{
  std::vector<std::vector<double>> matrix;
  for (size_t i = 0; i < size; i++)
    matrix.push_back(get_random_vector(size));

  std::ofstream file(matrix_file);
  if (file)
  {
    for (size_t i = 0; i < size; i++)
    {
      for (size_t j = 0; j < size; j++)
        file << matrix[i][j] << " ";
      file << std::endl;
    }
  }
}

void print_matrix(std::string matrix_file)
{
  std::string line;
  std::ifstream file(matrix_file);
  while (std::getline(file, line))
    std::cout << line << std::endl;
}

double elaborate_trace(std::string matrix_file)
{
  double trace = 0;
  double num;
  size_t i = 0;
  std::string line;

  std::ifstream file(matrix_file);
  while (std::getline(file, line))
  {
    std::stringstream ss(line);
    std::vector<double> v;
    while (ss >> num)
      v.push_back(num);
    trace += v.at(i++);
  }

  return trace;
}

void generate_students(const std::string &name)
{

  std::vector<std::string> male_names{
      "Antoni", "Jakub", "Jan", "Szymon", "Aleksander", "Filip", "Mikolaj", "Wojciech", "Adam", "Stanislaw", "Michal", "Wiktor", "Piotr", "Nikodem", "Igor", "Ignacy", "Tymon", "Milosz", "Maksymilian", "Tymoteusz", "Mateusz", "Bartlomiej", "Krzysztof", "Julian", "Tomasz", "Gabriel", "Hubert", "Fabian", "Natan", "Pawel", "Kamil", "Ksawery", "Bruno", "Borys", "Kajetan", "Artur", "Adrian", "Olaf", "Krystian", "Sebastian", "Cezary", "Grzegorz", "Daniel", "Eryk", "Tadeusz", "Blazej", "Lukasz", "Witold", "Rafal", "Henryk", "Tobiasz", "Damian"},
      female_names{
          "Zuzanna", "Julia", "Maja", "Zofia", "Hanna", "Alicja", "Maria", "Amelia", "Oliwia", "Aleksandra", "Wiktoria", "Emilia", "Laura", "Natalia", "Pola", "Liliana", "Iga", "Marcelina", "Anna", "Helena", "Kornelia", "Klara", "Jagoda", "Lucja", "Barbara", "Malgorzata", "Joanna", "Aniela", "Izabela", "Kalina", "Marta", "Roza", "Katarzyna", "Ewa", "Eliza", "Klaudia", "Rozalia", "Dominika", "Adrianna", "Patrycja", "Urszula", "Melania", "Malwina", "Marianna", "Lidia", "Liwia", "Aurelia", "Olga", "Daria", "Kamila", "Bianka", "Dorota", "Gaja", "Ada", "Apolonia", "Wanda", "Diana", "Dagmara", "Jowita", "Inga", "Jagna", "Agnieszka", "Ida", "Luiza", "Monika", "Emma", "Jadwiga"};

  std::vector<std::string> surnames{
      "Nowak", "Wojcik", "Kowalczyk", "Wozniak", "Mazur", "Krawczyk", "Kaczmarek", "Zajac", "Krol", "Wrobel", "Wieczorek", "Dudek", "Adamczyk", "Stepien", "Pawlak", "Sikora", "Walczak", "Szewczyk", "Pietrzak", "Wlodarczyk", "Kubiak", "Kolodziej", "Sobczak", "Mroz", "Szulc"};

  const int N{500};

  std::bernoulli_distribution distro_gender(0.5);
  std::uniform_int_distribution<int> distro_male_name(0, male_names.size() - 1);
  std::uniform_int_distribution<int> distro_female_name(0, female_names.size() - 1);
  std::uniform_int_distribution<int> distro_surname(0, surnames.size() - 1);
  std::normal_distribution<double> distro_grade(3.5, 0.4);

  std::default_random_engine engine;
  engine.seed(std::chrono::system_clock::now().time_since_epoch().count());

  std::ofstream file(name);
  if (file)
  {
    for (int i = 0; i < N; i++)
    {
      if (distro_gender(engine))
      {
        file << male_names[distro_male_name(engine)]
             << "\t" << male_names[distro_male_name(engine)]
             << "\t" << surnames[distro_surname(engine)];
      }
      else
      {
        file << female_names[distro_female_name(engine)]
             << "\t" << female_names[distro_female_name(engine)]
             << "\t" << surnames[distro_surname(engine)];
      }
      file << "\t" << std::setprecision(3) << std::fmin(std::fmax(distro_grade(engine), 2.0), 5.0);
      file << std::endl;
    }
  }
  return;
}

double find_average(std::string data_file)
{
  std::string line;
  std::ifstream file(data_file);
  int i = 0;
  double sum = 0;
  while (std::getline(file, line))
  {
    std::stringstream ss(line);
    std::string name;
    double a;
    ss >> name;
    ss >> name;
    ss >> name;
    ss >> a;
    sum += a;
    i++;
  }

  return sum / i;
}

void find_the_best_student(std::string data_file, std::string &f_name, std::string &s_name, std::string &surname, double &grade)
{
  std::string line;
  std::ifstream file(data_file);

  while (std::getline(file, line))
  {
    std::string best_f_name;
    std::string best_s_name;
    std::string best_surname;
    double best_grade;

    std::stringstream ss(line);
    ss >> best_f_name;
    ss >> best_s_name;
    ss >> best_surname;
    ss >> best_grade;

    if (best_grade > grade)
    {
      f_name = best_f_name;
      s_name = best_s_name;
      surname = best_surname;
      grade = best_grade;
    }
  }
}