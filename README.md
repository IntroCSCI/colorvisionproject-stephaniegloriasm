# Helper Reader for Colorblindness

## Description

This program helps the user to read the different types of hexadecimal colors that an SVG picture could have. It determines the hexadecimal colors of the file that the user asked for, and it reads one file at a time, so the user would have to run the code again in order to input another file.

### v0.2 Updates

The new update allows the program to let the user know which of the colors shown are unique, these are any colors outside the primary pallete being: blue, red, yellow, black, and white.

### v1.0 Updates

The v1.0 update makes sure to store and determine the rest of the colors that are primary and exclude those that are not. In addition, there is some small changes in the main.cpp to make things more organized, like the addition of string and the mention of the new class. The new class determines the colors of the image and separates them to make them unique or primary.


## Developer

Gloria S. Sanchez

## Example

To run the program, give the following commands:

```
g++ --std=c++11 *.cpp -o cvp
./cvp
```

Here is an example of the program running:

```
 g++ -std=c++11 *.cpp -o cvp; ./cvp
Please name a new file: 
catBW.svg
The hexadecimal colors of this file are:
#000000
These are primary colors:#000000
Those are some nice colors! Please, run the code again to enter a new file!

```

## C++ Guide

### Variables and Data Types

I declared the int colorValue in order to store the numeric value of each color that the asked file contains. I also declared a string fileName userResponse. fileName stores the name of the file that the user requests.
```
string fileName;
```

### Console Input and Output

Some output in this program is mainly when we are asking the user a file so we can display the hexadeciaml colors on it. 
```
cout<<"Please name a new file: \n";
  
  getline(cin, fileName);
  reader.open(fileName, ios::in);
```

### Decisions

Some of the major Decisions that were used are if statements that helped the color values stay within the range that is needed which is 0 to 9, a to f, or A to F. There is another if statement to determine the opening of the file.

### Iteration

There is many while loops in this code, and they are used to define the file and find the given colors.
```
while (!reader.eof())
     {
      getline(reader, line);
      position = line.find("#");
``` 

There is also a for loop to list the hexadecimal colors with the help of a counter.

```
for (int counter = 0; counter < hexadecimalValues.size(); counter++){
    cout << '#' << hexadecimalValues[counter] <<endl;
  }
```
### File Input and Output

This program is using file input get a requesting file. The user is asked to input a file, and the output of the file are the hexadecimal colors that are displayed on the screen in order to help the user indentify each color in the image. There is the use of the fstream, sstream libraries to open, read and write into the files of the code.

### Arrays/Vectors

I decided to use vector since it is not a set size for it, and it is convinient for a pallete analyzer. The vector used in this program stores in the form of a string "hexadecimalValues". It makes sure to get the values on the chosen file. I also added the vector that strings a primary color and an hColor, these are the ones that differentiate the primary/basic colors of a palette to a unique/hard color to find.
```
vector<string>hexadecimalValues;
```

### Functions
This program uses void to store each one of the defined primary colors. It also uses the function bool to store the rest of the hexadecimalValues of the chosen file.

```
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

    if(hColor[uC]=="000"){
      hColor[uC]=="ffffff";
    }
    else if (hColor[uC]=="fff"){
      hColor[uC]=="000000";

   cout<<"#"<<hColor[uC]<<endl;
    }
  }
```

### Classes

The class IdentifyPColor stores the primary colors of the chosen file. Its member functions are primaryHColor and isHColor. The functions of it are public, and the variables are private. This new class comes with its own files being .cpp and .h
```
using std :: vector;
using std :: string;

IdentifyPColor::IdentifyPColor():hColor{""}{}
```
