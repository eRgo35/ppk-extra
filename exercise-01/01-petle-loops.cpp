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
      else
      {
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
      else
      {
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
      else
      {
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
      else
      {
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
      else
      {
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
      else
      {
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
      if ((r <= c && r <= n - c - 1) || (r >= c && r >= n - c - 1))
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
      else
      {
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
      else
      {
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
      if (r <= c && r <= n - c - 1)
      {
        if (r % 2 == 0)
          std::cout << "X";
        else
          std::cout << ".";
      }
      else if (r >= c && r >= n - c - 1)
      {
        if ((n - r) % 2 == 1)
          std::cout << "X";
        else
          std::cout << ".";
      }
      else if (r <= c && r >= n - c - 1)
      {
        if ((n - c) % 2 == 1)
          std::cout << "X";
        else
          std::cout << ".";
      }
      else
      {
        if (c % 2 == 0)
          std::cout << "X";
        else
          std::cout << ".";
      }
    }
    std::cout << std::endl;
  }

  std::cout << std::endl;
}

// finish
