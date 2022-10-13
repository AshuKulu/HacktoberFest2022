#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
void printStrangeElements(int *ar, int n)
{
  int A = 0, i, k = 0;
  for (i = 0; i < n; i++)
    A = A ^ ar[i];
  while ((A & 1) != 1)
  {
    A = A >> 1;
    k++;
  }
  int group0 = 0, group1 = 0;
  for (i = 0; i < n; i++)
  {
    if (((ar[i] >> k) & 1) == 1)
    {
      group0 = group0 ^ ar[i];
    }
    else
    {
      group1 = group1 ^ ar[i];
    }
  }
  int x = group0;
  int y = group1;
  if (x < y)
    cout << x << " " << y;
  else
    cout << y << " " << x;
}

int main()
{
  int n;
  cin >> n;
  int *ar = new int[n];
  for (int i = 0; i < n; i++)
  {
    cin >> ar[i];
  }
  printStrangeElements(ar, n);
  return 0;
}
