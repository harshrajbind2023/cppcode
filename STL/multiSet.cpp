#include<bits/stdc++.h>
using namespace std;

int main() {
  multiset <int> s1;
  multiset <int, greater <int>> s2;

  for (int i = 0; i < 5; i++) {
    s1.insert(i + 1);
  }

  for (int i = 0; i < 5; i++) {
    s1.insert(i + 1);
  }

  for (int i = 0; i < 5; i++) {
    s2.insert((i + 1) * 10);
  }

  for (int i = 0; i < 5; i++) {
    s2.insert((i + 1) * 10);
  }
  cout << '\n';

  set <int> ::iterator it;
  for (it = s1.begin(); it != s1.end(); it++)
    cout << * it << " ";

  cout << '\n';

  for (it = s2.begin(); it != s2.end(); it++)
    cout << * it << " ";
  cout << '\n';

  s1.erase(1);
  s2.erase(s2.begin(), s2.find(10));
  cout << "After erasing element, size of set1 is " << s1.size() << '\n';
  int val = 4;
  if (s1.find(val) != s1.end())
    cout << "The set1 contains " << val << endl;
  else
    cout << "The set1 does not contains " << val << endl;
  cout << "New elements of set1 are ";
  for (it = s1.begin(); it != s1.end(); it++)
    cout << * it << " ";
  cout << '\n';

  s1.clear();
  if (s1.empty() == true) {
    cout << "set1 is empty!";
  }
  return 0;
}