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
    if(s.find("chef") < s.length())
    {
      count++;
    }
    if(s.find("chfe") < s.length())
    {
      count++;
    }
    if(s.find("cehf") < s.length())
    {
      count++;
    }
    if(s.find("cefh") < s.length())
    {
      count++;
    }
    if(s.find("cfeh") < s.length())
    {
      count++;
    }
    if(s.find("cfhe") < s.length())
    {
      count++;
    }
    if(s.find("hcef") < s.length())
    {
      count++;
    }
    if(s.find("hcfe") < s.length())
    {
      count++;
    }
    if(s.find("hecf") < s.length())
    {
      count++;
    }
    if(s.find("hefc") < s.length())
    {
      count++;
    }
    if(s.find("hfec") < s.length())
    {
      count++;
    }
    if(s.find("hfce") < s.length())
    {
      count++;
    }
    if(s.find("echf") < s.length())
    {
      count++;
    }
    if(s.find("ecfh") < s.length())
    {
      count++;
    }
    if(s.find("ehcf") < s.length())
    {
      count++;
    }
    if(s.find("ehfc") < s.length())
    {
      count++;
    }
    if(s.find("efch") < s.length())
    {
      count++;
    }
    if(s.find("efhc") < s.length())
    {
      count++;
    }
    if(s.find("fche") < s.length())
    {
      count++;
    }
    if(s.find("fceh") < s.length())
    {
      count++;
    }
    if(s.find("fhce") < s.length())
    {
      count++;
    }
    if(s.find("fhec") < s.length())
    {
      count++;
    }
    if(s.find("fech") < s.length())
    {
      count++;
    }
    if(s.find("fehc") < s.length())
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
