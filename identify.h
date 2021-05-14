#define INDENTIFY_H
#ifndef INDENTIFY_H
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