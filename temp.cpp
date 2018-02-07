#include<iostream>
#include <string>

using namespace std;

int main()
{
  string s = "kanishk debnath";
  if(s.find("yup") != string::npos)
  {
    cout << "yes" << endl;
  }
  else
  {
      cout << "no" << endl;
  }
  return 0;
}
