#include <iostream>
using namespace std;
void solve()
{
  string str;
  cin >> str;
  char temp;
  int start = 0, end = str.length() - 1;
  
  while (start < end)
  {
    temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    ++start;
    --end;
  }
  cout << str << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
