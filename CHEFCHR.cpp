#include <iostream>
#include <string>

using namespace std;

int main()
{
  int T;
  char buffer;
  int count = 0;
  cin >> T;
  cin >> buffer;
  int *output;
  string s;
  output = new int[T];
  for(int i = 0; i < T; i++)
  {
    count = 0;
    getline(cin, s);
    if(s.find("chef") != string::npos)
    {
      count++;
    }
    if(s.find("chfe") != string::npos)
    {
      count++;
    }
    if(s.find("cehf") != string::npos)
    {
      count++;
    }
    if(s.find("cefh") != string::npos)
    {
      count++;
    }
    if(s.find("cfeh") != string::npos)
    {
      count++;
    }
    if(s.find("cfhe") != string::npos)
    {
      count++;
    }
    if(s.find("hcef") != string::npos)
    {
      count++;
    }
    if(s.find("hcfe") != string::npos)
    {
      count++;
    }
    if(s.find("hecf") != string::npos)
    {
      count++;
    }
    if(s.find("hefc") != string::npos)
    {
      count++;
    }
    if(s.find("hfec") != string::npos)
    {
      count++;
    }
    if(s.find("hfce") != string::npos)
    {
      count++;
    }
    if(s.find("echf") != string::npos)
    {
      count++;
    }
    if(s.find("ecfh") != string::npos)
    {
      count++;
    }
    if(s.find("ehcf") != string::npos)
    {
      count++;
    }
    if(s.find("ehfc") != string::npos)
    {
      count++;
    }
    if(s.find("efch") != string::npos)
    {
      count++;
    }
    if(s.find("efhc") != string::npos)
    {
      count++;
    }
    if(s.find("fche") != string::npos)
    {
      count++;
    }
    if(s.find("fceh") != string::npos)
    {
      count++;
    }
    if(s.find("fhce") != string::npos)
    {
      count++;
    }
    if(s.find("fhec") != string::npos)
    {
      count++;
    }
    if(s.find("fech") != string::npos)
    {
      count++;
    }
    if(s.find("fehc") != string::npos)
    {
      count++;
    }
    output[i] = count;
  }

  for(int i = 0; i < T; i++)
  {
    if(output[i] == 0)
    {
      cout << "normal" << endl;
    }
    else
    {
      cout << "lovely " << output[i] << endl;
    }
  }
  return 0;
}
