//Author: GLORIA
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "identifier.h"
using namespace std;

bool isPrimary(string, const vector<string>&);
void isUnique(vector<string>&);

int main(){

  string fileName = "";
  ifstream reader;
  string line = "";
  vector<string>hexadecimalValues;
  size_t position;

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

      if (line[position]) 
      {
        int colorValue;

        for (colorValue = position += 1; colorValue < line.size() && (line[colorValue] >= '0' && line[colorValue] <= '9'|| line[colorValue] >= 'a' && line[colorValue] <= 'f' || line[colorValue] >= 'A' && line[colorValue] <= 'F'); colorValue++) {

          if (line[colorValue+3] < '0' || line[colorValue+3] > '9' && line[colorValue+3] < 'a' || line[colorValue+3] > 'f' && line[colorValue+3] < 'A' || line[colorValue+3] > 'F')
          {
            if(isPrimary(line.substr(position, 3), hexadecimalValues)==true)
            {
              hexadecimalValues.push_back(line.substr(position, 3));
              break;
            }
          }
          else
          {

            if(isPrimary(line.substr(position, 6), hexadecimalValues)==true){
                hexadecimalValues.push_back(line.substr(position, 6));
                break;
            }
          }
        }
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
  for( int uC=0;uC<hColor.size();uC++){

    if(hColor[uC]=="000"||hColor[uC]=="ffffff"){

    }
    else if(hColor[uC]=="ff"){
      hColor[uC]=="ff0000";
    }
    else if(hColor[uC]=="fff"){
      hColor[uC]=="fff000";
    }
    else if(hColor[uC]=="000fff"){
      hColor[uC]=="000fff";
    }
    cout<<"#"<<hColor[uC]<<endl;
  }
  cout << "Those are some nice colors! Please, run the code again to enter a new file!";
}
