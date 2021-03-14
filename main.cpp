//Author: GLORIA
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
  string fileName;
  ifstream reader;
  string line = "";
  string baseColor;
  string color;
  size_t position;
 
  cout<<"Please name a new file: \n";
  
  getline(cin, fileName);
  reader.open(fileName, ios::in);

  if ( reader.is_open() ){

     while (!reader.eof()) {
      getline(reader, line);
      position = line.find("#");
      if (line[position]) {

        int colorValue;
        for 
        (colorValue = position += 1; (line[colorValue] >= '0' && line[colorValue] <= '9') || ((line[colorValue] >= 'A' && line[colorValue] <= 'F')) || (line[colorValue] >= 'a' && line[colorValue] <= 'f'); colorValue+=6) 


        cout << '#'<<colorValue<<endl;
        {
           color = line[colorValue];
          string i = line.substr(position,6);

          if
            (color.size()==6)
            cout <<i<< endl;
            else
            cout<<"Sorry,we could not find that file\n";
        }
      }
      

     }
  }

  return 0;
}
