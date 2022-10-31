/*
  PODSTAWY PROGRAMOWANIA KOMPUTEROW
  FUNDAMENTALS OF COMPUTER PROGRAMMING

  petle
  loops
 */

#include <iostream>

int main()
{
  int n;

  std::cout << "podaj rozmiar" << std::endl;
  std::cout << "input size" << std::endl;
  std::cin >> n;

  ///////////////////////////////////
  std::cout << "kwadrat" << std::endl;
  std::cout << "square" << std::endl;

  /*
  n == 10

  XXXXXXXXXX
  XXXXXXXXXX
  XXXXXXXXXX
  XXXXXXXXXX
  XXXXXXXXXX
  XXXXXXXXXX
  XXXXXXXXXX
  XXXXXXXXXX
  XXXXXXXXXX
  XXXXXXXXXX

  */
  for (int w = 0; w < n; w++) // wiersz, row
  {
    for (int k = 0; k < n; k++) // kolumna, column
    {
      std::cout << "X";
    }
    std::cout << std::endl;
  }
  std::cout << std::endl;

  ///////////////////////////////////
  std::cout << "pierwsza przekatna" << std::endl;
  std::cout << "first diagonal" << std::endl;

  /*
  n == 10

  X.........
  .X........
  ..X.......
  ...X......
  ....X.....
  .....X....
  ......X...
  .......X..
  ........X.
  .........X

  */

  for (int r = 0; r < n; r++)
  {
    for (int c = 0; c < n; c++)
    {
      if (c == r)
      {
        std::cout << "X";
      }
      else {
        std::cout << ".";
      }
    }
    std::cout << std::endl;
  }

  std::cout << std::endl;

  ///////////////////////////////////
  std::cout << "druga przekatna" << std::endl;
  std::cout << "second diagonal" << std::endl;

  /*
  n == 10

  .........X
  ........X.
  .......X..
  ......X...
  .....X....
  ....X.....
  ...X......
  ..X.......
  .X........
  X.........


  */

  for (int r = 0; r < n; r++)
  {
    for (int c = 0; c < n; c++)
    {
      if ((n - c - 1) == r)
      {
        std::cout << "X";
      }
      else {
        std::cout << ".";
      }
    }
    std::cout << std::endl;
  }

  std::cout << std::endl;

  ///////////////////////////////////
  std::cout << "nad przekatna" << std::endl;
  std::cout << "above the diagonal" << std::endl;

  /*
  n == 10

  .XXXXXXXXX
  ..XXXXXXXX
  ...XXXXXXX
  ....XXXXXX
  .....XXXXX
  ......XXXX
  .......XXX
  ........XX
  .........X
  ..........


  */

  for (int r = 0; r < n; r++)
  {
    for (int c = 0; c < n; c++)
    {
      if (c > r)
      {
        std::cout << "X";
      }
      else {
        std::cout << ".";
      }
    }
    std::cout << std::endl;
  }

  std::cout << std::endl;

  ///////////////////////////////////
  std::cout << "pod przekatna" << std::endl;
  std::cout << "below the diagonal" << std::endl;

  /*
  n == 10

  ..........
  X.........
  XX........
  XXX.......
  XXXX......
  XXXXX.....
  XXXXXX....
  XXXXXXX...
  XXXXXXXX..
  XXXXXXXXX.

  */

 for (int r = 0; r < n; r++)
  {
    for (int c = 0; c < n; c++)
    {
      if (c < r)
      {
        std::cout << "X";
      }
      else {
        std::cout << ".";
      }
    }
    std::cout << std::endl;
  }

  std::cout << std::endl;

  ///////////////////////////////////
  std::cout << "na pierwszej przekatnej i nad nia" << std::endl;
  std::cout << "on and above the first diagonal" << std::endl;

  /*
  n == 10

  XXXXXXXXXX
  .XXXXXXXXX
  ..XXXXXXXX
  ...XXXXXXX
  ....XXXXXX
  .....XXXXX
  ......XXXX
  .......XXX
  ........XX
  .........X


  */

 for (int r = 0; r < n; r++)
  {
    for (int c = 0; c < n; c++)
    {
      if (c >= r)
      {
        std::cout << "X";
      }
      else {
        std::cout << ".";
      }
    }
    std::cout << std::endl;
  }

  std::cout << std::endl;

  ///////////////////////////////////
  std::cout << "na drugiej przekatnej i nad nia" << std::endl;
  std::cout << "on and above the second diagonal" << std::endl;

  /*
  n == 10

  XXXXXXXXXX
  XXXXXXXXX.
  XXXXXXXX..
  XXXXXXX...
  XXXXXX....
  XXXXX.....
  XXXX......
  XXX.......
  XX........
  X.........


  */

 for (int r = 0; r < n; r++)
  {
    for (int c = 0; c < n; c++)
    {
      if ((n - c - 1) >= r)
      {
        std::cout << "X";
      }
      else {
        std::cout << ".";
      }
    }
    std::cout << std::endl;
  }

  std::cout << std::endl;

  ///////////////////////////////////
  std::cout << "klepsydra" << std::endl;
  std::cout << "sandglass" << std::endl;

  /*
  n == 10

  XXXXXXXXXX
  .XXXXXXXX.
  ..XXXXXX..
  ...XXXX...
  ....XX....
  ....XX....
  ...XXXX...
  ..XXXXXX..
  .XXXXXXXX.
  XXXXXXXXXX

  */

for (int r = 0; r < n; r++)
  {
    for (int c = 0; c < n; c++)
    {
      if (r == 0 || r == (n - 1) || (r == 1 && c > 0 && c < (n - 1)) || (r == (n - 2) && c > 0 && c < (n - 1)) || (r == 2 && c > 1 && c < (n - 2)) || (r == (n - 3) && c > 1 && c < (n - 2)) || (r == 3 && c > 2 && c < (n - 3)) || (r == (n - 4) && c > 2 && c < (n - 3)) || (r == 4 && c > 3 && c < (n - 4)) || (r == (n - 5) && c > 3 && c < (n - 4)))
      {
        std::cout << "X";
      }
      else
      {
        std::cout << ".";
      }
    }
    std::cout << std::endl;
  }

  std::cout << std::endl;

  ///////////////////////////////////
  std::cout << "poziome pasy" << std::endl;
  std::cout << "horizontal stripes" << std::endl;

  /*
  n == 10

  XXXXXXXXXX
  ..........
  XXXXXXXXXX
  ..........
  XXXXXXXXXX
  ..........
  XXXXXXXXXX
  ..........
  XXXXXXXXXX
  ..........

  */

 for (int r = 0; r < n; r++)
  {
    for (int c = 0; c < n; c++)
    {
      if ((r % 2) == 0)
      {
        std::cout << "X";
      }
      else {
        std::cout << ".";
      }
    }
    std::cout << std::endl;
  }

  std::cout << std::endl;

  ///////////////////////////////////
  std::cout << "pionowe pasy" << std::endl;
  std::cout << "vertical stripes" << std::endl;

  /*
  n == 10

  X.X.X.X.X.
  X.X.X.X.X.
  X.X.X.X.X.
  X.X.X.X.X.
  X.X.X.X.X.
  X.X.X.X.X.
  X.X.X.X.X.
  X.X.X.X.X.
  X.X.X.X.X.
  X.X.X.X.X.

  */

 for (int r = 0; r < n; r++)
  {
    for (int c = 0; c < n; c++)
    {
      if (c % 2 == 0)
      {
        std::cout << "X";
      }
      else {
        std::cout << ".";
      }
    }
    std::cout << std::endl;
  }

  std::cout << std::endl;

  ///////////////////////////////////
  std::cout << "zagniezdzone kwadraty" << std::endl;
  std::cout << "nested squared" << std::endl;

  /*
  n == 10

  XXXXXXXXXX
  X        X
  X XXXXXX X
  X X    X X
  X X XX X X
  X X XX X X
  X X    X X
  X XXXXXX X
  X        X
  XXXXXXXXXX

  */

   for (int r = 0; r < n; r++)
  {
    for (int c = 0; c < n; c++)
    {
      for (int i = 0; i < n; i+=2)
      {
        if (r == i || r == (n - i - 1)) // || c == 0 || c == (n - 1))
        {
          std::cout << "X";
        }
        else 
        {
          break;
        }
      }
      // if (r == 0 || r == (n - 1) || c == 0 || c == (n - 1) || (r == 2 && c > 1 && c < (n - 2)) || (r == (n - 3) && c > 1 && c < (n - 2)) || (r == (n - 5) && c > 3 && c < (n - 4)) || (r == (n - 6) && c > 3 && c < (n - 4)) || ((c == 2) && r > 1 && r < (n - 2)) || ((c == (n - 3) && r > 1 && r < (n - 2))))
      // {
      //   std::cout << "X";
      // }
      // else
      // {
      //   std::cout << " ";
      // }
    }
    std::cout << std::endl;
  }

  std::cout << std::endl;
}

// finis
