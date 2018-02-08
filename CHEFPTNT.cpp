#include <iostream>
#include <string>

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
    cin >> buffer;  //stores newline from the above
    getline(cin, s);
    if(i == 0)
      s = buffer + s;
    // finding number of even workers and odd workers
    for(int j = 0; j < K; j++)
    {
      if(s[j] == 'E')
        even++;
      else
        odd++;
    }
    for(int k = 0; k < M; k++)
    {
      if(k % 2 == 0)
      {
        if(X <= odd)
        {
          odd -= X;
          N -= X;
        }
        else
        {
          if(odd > 0)
          {
            N -= odd;
            odd = 0;
          }
        }
      }
      else
      {
        if(X <= even)
        {
          even -= X;
          N -= X;
        }
        else
        {
          if(even > 0)
          {
            N -= even;
            even = 0;
          }
        }
      }
      if(N <= 0)
        break;
    }

    if(N == 0)
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
