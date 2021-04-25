//Author: GLORIA
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

bool isPrimary(string hColor, const vector<string>&);
void isUnique(vector<string>&);

int main(){

  string fileName = "";
  ifstream reader;
  string line = "";
  size_t position;
 
  cout<<"Please name a new file: \n";
  getline(cin, fileName);

  string hColor;
  reader.open(fileName, ios::in);
  vector<string>hexadecimalValues;

  if ( reader.is_open() )
  {

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

  cout<< "These colors are primary: #"<<isPrimary(line.substr(position), hexadecimalValues)<<endl;
  
  cout<<"These are unique colors:";
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

void isUnique(string hexadecimalValues,vector <string> & hColor){
  for( int uC=0;uC<hColor.size();uC++){

    if(hColor[uC]=="000"){
      hColor[uC]=="000000";
    }
    else if(hColor[uC]=="ffffff"){
      hColor[uC]=="ffffff";
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
