#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
  int t;
  int odd = 0;
  int *n;
  int index = 0;
  int flag = 0;
  int lastIndex = -1;
  string s;
  map<char, int> word;
  map<char, int>::iterator p;
  cin >> t;

  for(int i = 0; i < t ; i++)
  {
    odd = 0;
    cin >> s;
    n = new int[s.length()];
    word.clear();
    index = 0;
    lastIndex = -1;
    
    for(int j = 0; s[j] != NULL ; j++)
    {
      if(word.find(s[j]) == word.end())
      {
        word.insert(pair<char, int> (s[j], 1));
      }
      else
      {
        word.at(s[j]) += 1;
      }
    }
    p = word.begin();

    while(p != word.end())
    {
      if(p->second % 2 != 0)
      {
        odd++;
      }
      if(odd == 2)
      {
        //cannot contain 2 odd time occuring characters
        flag = 1;
        break;
      }
      p++;
    }
    if(flag == 1)
    {
      cout << -1 << endl;
      flag = 0;
      continue;
    }

    //palindrome exists
    for(int j = 0; j < s.length(); j++)
    {
      if(j == lastIndex)
      {
        continue;
      }
      if(index == (s.length() - 1 - index) || index == (s.length() - 2 - index))
      {
        break;
      }
      n[index] = j + 1;
      word.at(s[j]) -= 1;
      for(int k = j + 1; k < s.length(); k++)
      {
        if(word.at(s[j]) > 0)
        {
          if(s[k] == s[j])
          {
            n[s.length() - 1 - index] = k + 1;
            word.at(s[j]) -= 1;
            lastIndex = k;
            index++;
            break;
          }
        }
      }
    }

    for(int j = 0; j < s.length(); j++)
    {
      cout << n[j] << " ";
    }
    cout << endl;
    delete n;
  }


  return 0;
}
