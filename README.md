# Helper Reader for Colorblindness

## Description

This program helps the user to read the different types of hexadecimal colors that an SVG picture could have. It determines the hexadecimal colors of the file that the user asked for, and it reads one file at a time, so the user would have to run the code again in order to input another file. Palette Analyzer with svg files

### v0.2 Updates

The new update allows the program to let the user know which of the colors shown are unique, these are any colors outside the primary pallete: being blue, red, yellow, black, and white. Also, the program is updated to the point where if the file is incorrect or not found, it lets the user know about it and it also asks the user if they would like to name a different file. In addition, whenever the size of the color is less than 6 characters on the hexadecimal, it checks and lets the user know that

### v1.0 Updates

*Coming soon*


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
example.svg
The hexadecimal colors of this file are:
#fff
#fff
#436298
#293
#192538
#fff
#f3e533
#fff
#ff7
#fff
#bf0000
#000
#Dis
#Der
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

Some of the major Decisions that were used are if statements that helped the color values stay within the range that is needed which is 0 to 9, a to f, or A to F. 
```
(line[colorValue+3] < '0' || line[colorValue+3] > '9' && line[colorValue+3] < 'a' || line[colorValue+3] > 'f' && line[colorValue+3] < 'A' || line[colorValue+3] > 'F')
```

### Iteration

There is a while loop in this code, and it is used to define the file.
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

This program is using file input get a requested file. The user is asked to input a file and the output of the file are the hexadecimal colors that are displayed on the screen in order to help the user indentify each color in the image.

### Arrays/Vectors

The vector used in this program is called "hexadecimalValues" and it stores the colors given on the requested file.
```
vector<string>hexadecimalValues;
```

### Functions

*Coming in version 0.2*

### Classes

*Coming in version 1.0*
