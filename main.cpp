//Author: GLORIA
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "identify.h"
using namespace std;


void isUnique(vector<string>&);

int main(){

  string fileName = "";
  ifstream reader;
  string line = "";
  vector<string>hexadecimalValues;
  int position;
  identify hColors;

 do{
   cout<<"Please name a new file: \n";
   getline(cin, fileName);
   reader.open(fileName, ios::in);
  }

  while (!reader.is_open());
  {
    if (reader.is_open())

     while (!reader.eof())
     {
      getline(reader, line);
      position = line.find("#");

      while (position<line.size()) 
      {
        string hexadecimalValues=line.substr(position);
        hColors.isHColor(colorValueString);

        if (hColors.uniqueHColor(hexadecimalValues)!=""){
          hexadecimalValues.push_back(hColors.uniqueHColor(hexadecimalValues));
        }
        position=line.find("#",position+1);
      }
     }
       
  }
  
  reader.close();

  cout << "The hexadecimal colors of this file are:\n";
  for (int counter = 0; counter < hexadecimalValues.size(); counter++){
    cout << '#' << hexadecimalValues[counter] <<endl;
  }
  
  cout<<"These are primary colors:";
  isUnique(hexadecimalValues);

  return 0;
}


bool isPrimary(string hColor, const vector<string> & primaryColor){
  for(int pC=0; pC<primaryColor.size();pC++){
    if(primaryColor[pC]==hColor)
    {
      return false;
    }
  }
  return true;
}

void isUnique(vector <string> & hColor){
  string redColor;
  string greenColor;
  string blueColor;
  int red;
  int green;
  int blue;


  for( int uC=0;uC<hColor.size();uC++){

    if(hColor[uC]=="000"){
      hColor[uC]=="ffffff";
    }
    else if (hColor[uC]=="fff"){
      hColor[uC]=="000000";

    }

    redColor=hColor[uC].substr(1,2);
    greenColor=hColor[uC].substr(3,2);
    blueColor=hColor[uC].substr(5,2);

    stringstream redValue;
    redValue<<hex<<redColor;
    redValue>>red;

    stringstream greenValue;
    greenValue<<hex<<greenColor;
    greenValue>>green;

    stringstream blueValue;
    blueValue<<hex<<blueColor;
    blueValue>>blue;

    if (red-green<=90&&green-blue<=90&&hColor[uC]!="#ffffff"){
      cout<<"#"<<hColor[uC]<<endl;
    }
  }
  cout << "Those are some nice colors! Please, run the code again to enter a new file!";
}
