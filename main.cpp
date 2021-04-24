//Author: GLORIA
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void printVec(vector<string>);


int main()
{
  string fileName;
  ifstream reader;
  string line = "";
  size_t position;
 
  cout<<"Please name a new file: \n";
  
  getline(cin, fileName);
  reader.open(fileName, ios::in);
  vector<string>hexadecimalValues;

  if ( reader.is_open() )
  {

     while (!reader.eof()){
      getline(reader, line);
      position = line.find("#");

      if (line[position]) 
      {
        int colorValue;

        for (colorValue = position += 1; colorValue < line.size() && (line[colorValue] >= '0' && line[colorValue] <= '9'|| line[colorValue] >= 'a' && line[colorValue] <= 'f' || line[colorValue] >= 'A' && line[colorValue] <= 'F'); colorValue++) {

          if (line[colorValue+3] < '0' || line[colorValue+3] > '9' && line[colorValue+3] < 'a' || line[colorValue+3] > 'f' && line[colorValue+3] < 'A' || line[colorValue+3] > 'F'){

            hexadecimalValues.push_back(line.substr(position, 3));
            break;
          }
          else{
            hexadecimalValues.push_back(line.substr(position, 6));
            break;
          }
        
          if (line[colorValue]<=6){
            cout << hexadecimalValues[colorValue];
            }
            else //if (line.size()>6){
            cout << "I am sorry, that is not a valid number";
        }

      }
     }
  }
  
  reader.close();
 printVec(hexadecimalValues);
}

int counter;
void printVec(vector<string>hexadecimalValues){
  for (int counter = 0; counter < hexadecimalValues.size(); counter++)
  cout << "The hexadecimal color(s) of this file are/is:\n";
      cout << '#' << hexadecimalValues[counter] <<endl;{
        if (hexadecimalValues[counter]=="#000000"||hexadecimalValues[counter]=="#fff"||hexadecimalValues[counter]=="#ff0000"||hexadecimalValues[counter]=="#fff000"||hexadecimalValues[counter]=="#ffffff"||hexadecimalValues[counter]=="#0000ff"){
          cout<<"These colors are in the primary color range:"<<hexadecimalValues[counter];
        }
        else{
          cout<<"These are unique colors:\n";//<<hexadecimalValues[counter];
     }
    }
  
  cout << "Those are some nice colors! Please, run the code again to enter a new file!";
}
