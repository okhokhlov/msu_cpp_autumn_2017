#include <cstdio>
#include "timer.h"

#define ROWS 100000
#define COLS 100000
#define WAR_CYC 100

using namespace std;


void set_matrix(int m[ROWS][COLS])
{
   int i = 0;
   int j = 0;
   srand(time(0));

   for(i = 0; i < ROWS; i++)
      for(j = 0; j < COLS; j++)
         m[i][j] = rand() % 100;

}

int sum_by_columns(int m[ROWS][COLS])
{
   int s = 0;
   int i = 0;
   int j = 0;

   for (i = 0; i < COLS; i++)
      for (j = 0; j < ROWS; j++)
         s += m[j][i];

    return s;
}

int main()
{
   int tmp = 0;
   int i = 0;
   int sum = 0;

   int* m[COLS] = new int[ROWS][COLS];

   set_matrix(m);

   for(i = 1; i < WAR_CYC; i++)
      tmp = sum_by_columns(m);

   Timer* t = new Timer;

   sum = sum_by_columns(m);

   cout << p << endl;

   delete t;
   delete[] m;
   return 0;
}
