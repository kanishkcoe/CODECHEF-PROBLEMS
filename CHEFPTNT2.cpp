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
  int evenBusy, oddBusy;
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

    if(N > K || X == 0)
    {
      output[i] = 0;
      continue;
    }
    // finding number of even workers and odd workers
    for(int j = 0; j < K; j++)
    {
      if(s[j] == 'E')
        even++;
      else
        odd++;
    }

    evenBusy = even / X;
    oddBusy = odd / X;

    if(evenBusy <= M / 2 && oddBusy <= (M + 1) / 2)
    {
      output[i] = 1;
    }
    else
    {
      output[i] = 0;
    }
    // if(M < (evenBusy + oddBusy + 2))
    // {
    //   output[i] = 0;
    // }
    // else
    // {
    //   output[i] = 1;
    // }

  }

  for(int i = 0; i < T; i++)
  {
    if(output[i] == 1)
      cout << "yes" << endl;
    else
      cout << "no" << endl;
  }

}
