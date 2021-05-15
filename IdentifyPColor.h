#define INDENTIFYPCOLOR_H
#ifndef INDENTIFYPCOLOR_H
#include <string>
#include <vector>

using std :: string;
using std :: vector;

class IdentifyPColor
{
  private:
    int counter;
    string hColor;
    string primaryColor;

  public
    IdentifyPColor();
    bool isPrimary(string hColor, const vector<string> &primaryColor
    void isUnique(vector<string>& hColor);
    void isHColor(string);
    string hexadecimalValues;
    string fileName;
    string primaryHColor(const vector<string> &);
}
#endif
