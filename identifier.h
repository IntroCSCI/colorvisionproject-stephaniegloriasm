#define INDENTIFIER_H
#ifndef INDENTIFIER_H
#include <string>
#include <vector>

using std :: string;
using std :: vector;

class identifier{
  private:
    int counter;
    string hColor;

  public
    identifier();
    void isHColor(string);
    string uniqueHColor(const vector<string> &);
}
#endif