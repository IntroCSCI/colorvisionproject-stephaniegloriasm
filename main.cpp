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

        cout << '#';
        for (char colorValue = position += 1; (line[colorValue] >= '0' && line[colorValue] <= '9') || ((line[colorValue] >= 'A' && line[colorValue] <= 'F')) || (line[colorValue] >= 'a' && line[colorValue] <= 'f'); colorValue++) 

      
    
        {
        
          color = line[colorValue];
          string colorValue = "123456";

        
            string value1 = "123456";
            string part = colorValue.subtr(1);
            string value2 = "123456";
            string part1 = colorValue.subtr(2);
            string value3 = "123456";
            string part2 = colorValue.subtr(2);
            string value4 = "123456";
            string part3 = colorValue.subtr(3);
            string value5 = "123456";
            string part4 = colorValue.subtr(4);
            string value6 = "123456";
            string part5 = colorValue.subtr(5);

          if
            {
            color.size()==6
            cout << color;
            }


          else{
          break;}
        }
      }
      cout << endl;
     }
  }
  return 0;
}
