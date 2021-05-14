#include <string>
#include <vector>
#include "identify.h"

using std :: vector;
using std :: string;

identify::identify():hColor{""}{}

void identify::isHColor(string colorValueString){
  counter=0;
  for (int colorValue=1; colorValue<colorValueString.size();colorValue++){
    if((colorValueString[colorValue] >= '0' && colorValueString[colorValue] <= '9'|| colorValueString[colorValue] >= 'a' && colorValueString[colorValue] <= 'f' || colorValueString[colorValue] >= 'A' && colorValueString[colorValue] <= 'F'))
    {
      counter = counter+1;
    }
    else{
      break;
    }
  }
  if (counter==6){
    hColor=colorValueString.substr(0,7);
  }
  else if (counter==3){
    hColor=colorValueString.substr(0,4);
  }
}
string identify::uniqueHColor(const vector<string>&primaryColor){
  for(int pC=0;pc<primaryColor.size();pC++){
    if (primaryColor[pC]==hColor){
      return "";
    }
  }
  return hColor;
}