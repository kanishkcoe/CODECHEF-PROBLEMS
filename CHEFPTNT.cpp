#include <iostream>
#include <string>

#define min(a, b) (a <= b)? a : b

using namespace std;

int main()
{
  int T;  // # of test cases
  int N;  // # of patents
  int M;  // # of months to complete
  int X;  // # of workers work at most in a month
  int K;  // # of workers
  string s; // working month preference of the workers
  int even, odd;  //counts the number of even and odd occurences
  char buffer;
  int *output;
  cin >> T;
  output = new int[T];  //stores output
  // test cases loop
  for(int i = 0; i < T; i++)
  {
    even = 0;
    odd = 0;

    cin >> N;
    cin >> M;
    cin >> X;
    cin >> K;
    cin >> s;
    if(N > K)
    {
      output[i] = 0;
      continue;
    }
    // finding number of even workers and odd workers
    for(int j = 0; s[j] != NULL; j++)
    {
      if(s[j] == 'E')
        even++;
      else
        odd++;
    }

    for(int k = 1; k <= M; k++)
    {
      if( k % 2 == 1 && odd > 0)
      {
        N -= min(X, odd);
        odd -= X;
      }
      else if(k % 2 == 0 && even > 0)
      {
        N -= min(X, even);
        even -= X;
      }
    }

    if(N <= 0)
    {
      output[i] = 1;
    }
    else
    {
      output[i] = 0;
    }
  }

  for(int i = 0; i < T; i++)
  {
    if(output[i] == 1)
      cout << "yes" << endl;
    else
      cout << "no" << endl;
  }

}
