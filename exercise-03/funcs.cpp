#include <iostream>
#include <random>
#include <cmath>
#include "defs.h"

void hello_world()
{
  std::cout << "Hello, World!" << std::endl;
}

int negate(const int n)
{
  return -n;
}

double sum(const double a, const double b)
{
  return a + b;
}

double max_of_5(const double a, const double b, const double c, const double d, const double e)
{
  double tmp[5] = {a, b, c, d, e};
  double k = tmp[0];
  for (int i = 0; i < 5; i++)
    if (tmp[i] > k)
      k = tmp[i];
  return k;
}

double max_array(const double p[], const int n)
{
  double k = p[0];
  for (int i = 0; i < n; i++)
    if (p[i] > k)
      k = p[i];
  return k;
}

double max_vector(const std::vector<double> &v)
{
  double k = v.at(0);
  for (int i = 0; i < v.size(); i++)
    if (v.at(i) > k)
      k = v.at(i);
  return k;
}

std::vector<double> random_vector(const int n, const double mini, const double maxi)
{
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_real_distribution<> distrib(mini, maxi);

  std::vector<double> tmp;

  for (int i = 0; i < n; i++)
    tmp.push_back(distrib(gen));

  return tmp;
}

void print(const std::vector<double> &w)
{
  std::cout << "[ ";
  for (int i = 0; i < w.size(); i++)
    std::cout << w.at(i) << " ";
  std::cout << "]" << std::endl;
}

void print(const double arr[], const int n)
{
  std::cout << "{ ";
  for (int i = 0; i < n; i++)
    std::cout << arr[i] << " ";
  std::cout << "}" << std::endl;
}

void reverse(double arr[], const int n)
{
  double tmp[n];
  for (int i = 0; i < n; i++)
    tmp[i] = arr[n - i - 1];
  for (int i = 0; i < n; i++)
    arr[i] = tmp[i];
}

std::vector<double> filter(const std::vector<double> &w, const double mini, const double maxi)
{
  std::vector<double> list;
  for (int i = 0; i < w.size(); i++)
    if (w.at(i) > mini && w.at(i) < maxi)
      list.push_back(w.at(i));
  return list;
}

void sort(std::vector<double> &w)
{
  double minI = 0;

  for (int i = 0; i < w.size(); i++)
  {
    double min = w.at(i);
    for (int j = i; j < w.size(); j++)
    {
      if (min > w.at(j))
      {
        min = w.at(j);
        minI = j;
      }
    }
    double tmp = w.at(i);
    w.at(i) = min;
    w.at(minI) = tmp;
  }
}

int Round(const double d)
{
  int base = d;
  double rest = d - (double)base;

  if (rest >= 0.5)
    if (base >= 0)
      base++;
    else
      base--;

  return base;
}

std::vector<int> Round(const std::vector<double> &w)
{
  std::vector<int> rounded;
  for (int i = 0; i < w.size(); i++)
  {
    int base = w.at(i);
    double rest = fabs(base - w.at(i));

    if (rest >= 0.5)
      if (base >= 0)
        base++;
      else
        base--;

    rounded.push_back(base);
  }
  return rounded;
}

void print(const std::vector<int> &w)
{
  std::cout << "[ ";
  for (int i = 0; i < w.size(); i++)
    std::cout << w.at(i) << " ";
  std::cout << "]" << std::endl;
}

std::vector<int> unique(const std::vector<int> &w)
{
  std::vector<int> tmp;
  for (int i = 1; i < w.size(); i++)
    if (w.at(i - 1) != w.at(i))
      tmp.push_back(w.at(i - 1));

  tmp.push_back(w.at(w.size() - 1));

  return tmp;
}