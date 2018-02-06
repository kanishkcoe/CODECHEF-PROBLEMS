#include <iostream>

using namespace std;

int main()
{
  long int n;
  float g;
  float x;
  cin >> n;

  g = 1;

  while(g * g != n)
  {
    x = n / g;
    g = ( g + x ) / 2;
  }

  cout << "Square root is : " << g << endl;
}
