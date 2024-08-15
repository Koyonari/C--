# Join me on my journey to learn C++

## Purpose
This repository is dedicated to learning the C++ language via project-based learning with my background of C#. This repository contains my practice programs I have made along my journey to learning C++. I aim to learn the ins-and-outs of C++, especially the fundamentals. 😁😆😺

## Programs
| Folder Name | Brief Description |
| ----------- | ----------- |
| calc_prog | Calculator Program |
| hype_calc | Hypotenuse Calculator |
| num_guess | Number Guessing Game |
| ran_event | Random Event Generator |
| rng | Random Number Generator |
| temp_conv | Temperature Converter |

## Technologies Used
- Visual Studio Code
- C/C++ Extension
- Code Runner

## What I have learnt thus far!
#### My Notes: `https://fluorescent-frame-930.notion.site/C-175c16e1f75d4171aaf33ff2a933d18f?pvs=25`

### Prerequisites
`C#`

### Important Notes
```cpp
// iostream - standard input-output stream
// iostream declares objects that control reading from and writing to standard stream
#include <iostream>

// return 0 - program executed successfully
// return 1 - program not executed successfully
int main() {
    return 0;
}
```

### Printing
```cpp
int main() {
	std::cout << "Hello, World!";
	std::cout << "meow";
	return 0;
}

/*Output:
Hello, World!meow*/
```

### Next Line - endl & '\n'
```cpp
// endl - endline forces a flush
// '\n' - next line does not force buffer flush frequently, better performance wise
int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Hello, World!" << '\n';
    std::cout << "Hello, World!";
    return 0;
}

/*Output:
Hello, World!
Hello, World!
Hello, World!*/
```

### Declaration & Assignment - Same as C#
```cpp
#include <iostream>

int main() {
    int x; //Declaration
    x = 5; //Assignment
    int y = 6; //Declaration + Assignment
    int sum = x + y;

    std::cout << "x-value: " << x << '\n';
    std::cout << "y-value: " << y << '\n';
    std::cout << "sum: " << sum << '\n';

    return 0;
}

/*Output:
x-value: 5
y-value: 6
sum: 11*/
```

### Data Types - Similar to C# except std::string
```cpp
#include <iostream>

int main() {
    // double
    double a = 2.232;
    std::cout << a << '\n';

    // bool
    bool b = true; //Outputs true as 1
    bool c = false; //Outputs false as 0
    std::cout << b << '\n';
    std::cout << c << '\n';

    // char
    char d = 'A';
    char e = 'AB'; //if there is multiple characters in char, it will take the last character
    std::cout << d << '\n';
    std::cout << e << '\n';

    // int
    int x = 12;
    std::cout << x << '\n';

    // string
    std::string name = "john";
    std::cout << "Hello " << name << "!\n";
    
    // const
    const double pi = 3.14;
    pi = 3; // will return an error
    double radius = 10;
    double cir = 2 * pi * radius;
    std:cout << cir << "cm";
	        
    return 0;
}

/*Output:
2.232
1
0
A
B
12
Hello john!
62.8cm*/
```

### User Input & Output - cout & cin
```cpp
// cout << - Insertion operator
// cin >> - Extraction operator

Example 1: std::cin to get input
#include <iostream>

int main() {
    std::string name;    
    std::cout << "Enter your name: ";
    std::cin >> name;

    std::cout << "Hello, " << name << "!" << std::endl;

    return 0;
}
/*Output:
Enter your name: Johnny Cash
Hello, Johnny!*/

Example 2: std::getline to include spaces
#include <iostream>
#include <string>

int main() {
    std::string name;    
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << "Hello, " << name << "!" << std::endl;

    return 0;
}
/*Output:
Enter your name: Johnny Cash
Hello, Johnny Cash!*/

Example 3: std::ws to exclude any whitespaces and new lines from getline
Problem: Check output
#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;
    
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << "Hello, " << name << "!" << std::endl << "You are " << age << " years old." << std::endl;

    return 0;
}
/*Output:
Enter your age: 5
Enter your name: Hello, !
You are 5 years old.*/
Solution: std::ws
#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;
    
    std::cout << "Enter your name: ";
    std::getline(std::cin >> std::ws, name);

    std::cout << "Hello, " << name << "!" << std::endl << "You are " << age << " years old." << std::endl;

    return 0;
}
/*Output:
Enter your age: 5
Enter your name: John China
Hello, John China!
You are 5 years old.*/
```

### Namespaces
```cpp
Example 1:
#include <iostream>

int main() {
    int x = 5;
    int x = 6; // Error: redeclaration of 'int x'
    
    return 0;
}
/*Output:
Error: redeclaration of 'int x'*/

Example 2: using variables in other namespaces
#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}
int main() {
    int x = 0;
    std::cout << "Main namespace x: " << x << std::endl;
    std::cout << "First namespace x: " << first::x << std::endl;
    std::cout << "Second namespace x: " << second::x << std::endl;

    return 0;
}
/*Output:
Main namespace x: 0
First namespace x: 1
Second namespace x: 2*/

Example 3: using namespaces
#include <iostream>

namespace first{
	int x = 1;
}

int main() {
    using namespace first; //References everything from namespace 'first'
    std::cout << x << std::endl;

    return 0;
}
/*Output:
1*/

Example 4: using namespace std
// std - saves time by removing the need of writing std::
// High likelihood that variables have naming conflicts such as data
#include <iostream>

int main() {
    using namespace std;
    int x = 0;
    cout << x << endl;

    return 0;
}
/*Output:
0*/

Example 5: using std::cout; using std::endl;
// using std::cout - saves time by removing the need of writing std::cout
// using std::endl - saves time by removing the need of writing std::endl
#include <iostream>

int main() {
    using std::cout;
    using std::endl;

    int x = 0;
    cout << x << endl;

    return 0;
}
/*Output:
0*/
```

### Typedef & Type Aliases
```cpp
// typedef - helps readability by assigning a data type to a typedef variable
// typedef - naming convention ends with _t
// using - can use 'using' instead of 'typedef': more suitable for templates
#include <iostream>

typedef std::string text_t; // Assign text_t to be a string data type
using number_t = int; // Assign number_t to be a int data type

int main() {
    text_t name = "Johnny";
    std::cout << "Hello, " << name << "!" << std::endl;

    number_t age = 25;
    std::cout << "You are " << age << " years old." << std::endl;

    return 0;
}

/*Output:
Hello, Johnny!
You are 25 years old.*/
```

### Math Operators - Same as C#, has order of precedence
```cpp
// Operators are similar to C#
#include <iostream>
#include <cmath>

int main() {
    double students = 20;

    // Addition
    students = students + 1;
    students+=1;
    students++;

    // Subtraction
    students = students - 1;
    students-=1;
    students--;

    // Multiplication
    students = students * 2;
    students*=2;

    // Division
    students = students / 2;
    students/=2;

    // Modulus
    int apples = 20;
    int remainder = apples % 3; // Both must be the same data type

    // Math functions
    // Max: Get higher of the two numbers
    int max = std::max(5, 10);
    // Min: Get lower of the two numbers
    int min = std::min(5, 10);

    //CMath functions - Must #include <cmath>
    // Power: a^b
    double power = pow(2, 3); 
    // Sqrt: Square root
    double squareRoot = sqrt(64);
    // Abs: Absolute value, removes negative sign
    double absolute = abs(-4.7);
    // Round: Rounds to nearest whole number
    double rounded = round(4.7);
    // Floor: Rounds down to nearest whole number
    double floored = floor(4.7);
    // Ceil: Rounds up to nearest whole number
    double ceiling = ceil(4.7);

    std::cout << "Students: " << students << '\n';
    std::cout << "Remainder: " << remainder << '\n';
    std::cout << "Max: " << max << '\n';
    std::cout << "Min: " << min << '\n';
    std::cout << "Power: " << power << '\n';
    std::cout << "Sqrt: " << squareRoot << '\n';
    std::cout << "Abs: " << absolute << '\n';
    std::cout << "Round: " << rounded << '\n';
    std::cout << "Floor: " << floored << '\n';
    std::cout << "Ceil: " << ceiling << '\n';
    
    return 0;
}

/*Output:
Students: 20
Remainder: 2
Max: 10
Min: 5
Power: 8
Sqrt: 8
Abs: 4
Round: 5
Floor: 4
Ceil: 5*/
```

### Type Conversion - Implicit & Explicit, Same as C#
```cpp
//Implicit - Automatic
//Explicit - Precede value with new data type

Example 1: Implicit
#include <iostream>

int main() {
    int x = 6.9; // Assigning double to int
    char y = 100;  // Assigning int to char - converts using ASCII

    std::cout << x;
    std::cout << y;

    return 0;
}
/*Output:
6d*/

Example 2: Explicit
#include <iostream>

int main() {
    double x = (int)6.9; // Assigning double to int
    
    std::cout << x;
    std::cout << (char)100; // Assigning int to a char - converts using ASCII

    return 0;
}
/*Output:
6d*/
```

### If, else, else if statement - Same as C#
```cpp
// Order matters
#include <iostream>

int main() {
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 18) {
        std::cout << "You are old enough to enter the club." << std::endl;
    } else if (age < 1) {
        std::cout << "Invalid input." << std::endl;
    }
    else {
        std::cout << "You are not old enough to enter the club." << std::endl;
    }

    return 0;
}
```

### Switch statements - Same as C#, more efficient and better readability than if else
```cpp
#include <iostream>

int main() {
    int month;
    std::cout << "Enter the month (1-12): ";
    std::cin >> month;

    switch (month) {
        case 1:
            std::cout << "January";
            break;
        case 2:
            std::cout << "February";
            break;
        case 3:
            std::cout << "March";
            break;
        case 4:
            std::cout << "April";
            break;
        case 5:
            std::cout << "May";
            break;
        case 6:
            std::cout << "June";
            break;
        case 7:
            std::cout << "July";
            break;
        case 8:
            std::cout << "August";
            break;
        case 9:
            std::cout << "September";
            break;
        case 10:
            std::cout << "October";
            break;
        case 11:
            std::cout << "November";
            break;
        case 12:
            std::cout << "December";
            break;
        default:
            std::cout << "Invalid input";
            break;
    }

    return 0;
}
```

### Ternary Operators - Same as C#
```cpp
// Alternative to if else, switch statements
#include <iostream>

int main() {
    int grade;
    bool result;

    std::cout << "Enter your grade: ";
    std::cin >> grade;

    result = (grade >= 50) ? true : false; //Ternary

    if (result == true) {
        std::cout << "You pass!" << '\n';
    }
    else {
        std::cout << "You failed!" << '\n';
    }

    return 0;
}
```

### Logical Operators - Same as C#
```cpp
// && - and
// || - or
// ! - reverse
#include <iostream>

int main() {
    int temp;
    bool sunny;

    std::cout << "Enter temperature: ";
    std::cin >> temp;

    if (temp < 0 || temp >= 30) {
        std::cout << "Bad temperature" << '\n';
    }
    else {
        std::cout << "Good temperature" << '\n';
    }

    std::cout << "Enter if sunny (0/1): ";
    std::cin >> sunny;

    if (!sunny) {
        std::cout << "Cloudy outside" << '\n';
    }
    else {
        std::cout << "Sunny outside" << '\n';
    }

    if (sunny && temp <= 25) {
        std::cout << "Amazing weather today" << '\n';
    }
    else {
        std::cout << "Bad weather today" << '\n';
    }

    return 0;
}
```

### String Manipulation
```cpp
// .empty() - checks if string is empty, returns boolean
// .length() - returns the length of the string
// .clear() - clears the string
// .append("string") - appends a string to another string
// .at(index) - returns the character at a specific index
// .insert(index, "string") - inserts a string at a specific index
// .find("string") - finds a string within a string, returns index + 1
// .erase(index, length) - erases a string from a specific index to a specific length

#include <iostream>
#include <string>

int main() {
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin >> std::ws, name);

    // .empty()
    if (name.empty()) {
        std::cout << "Invalid input" << '\n';
    }

    // .length()
    if (name.length() > 4) {
        std::cout << "Hello, " << name << "!" << '\n';
    }
    else {
        std::cout << "Your name needs to be over 5 characters" << '\n';
    }

    // .clear()
    name.clear();
    if (name == "") {
        std::cout << "Name has been cleared" << '\n';
    }

    // .append()
    name.append("@gmail.com");
    std::cout << "Appended '@gmail.com': " << name << '\n';

    // .at()
    std::cout << name.at(1) << '\n';

    // .insert(index, string)
    std::cout << name.insert(0, "hello ") << '\n';

    // .find(string)
    std::cout << name.find("gmail") << '\n';

    // .erase(index, length)
    std::cout << name.erase(0, 6) << '\n';

    return 0;
}
/*Output:
Enter your name: johnny cash
Hello, johnny cash!
Name has been cleared
Appended '@gmail.com': @gmail.com
g
hello @gmail.com
7
@gmail.com*/
```

### While Loops - Same as C#
```cpp
#include <iostream>
#include <string>

int main() {
    std::string name;

    while (name.empty()) {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }
    
    std::cout << "Hello, " << name << "!" << std::endl;

    return 0;
}
```

### Do While Loop - Same as C#
```cpp
#include <iostream>

int main() {
    int number;
    do {
        std::cout << "Enter a postive number: ";
        std::cin >> number;
    } while (number < 0);
    
    std::cout << "The number is: " << number << "!\n";

    return 0;
}
```

### For Loop - Same as C#
```cpp
#include <iostream>

int main() {
    
    for (int i = 0; i < 3; i++) {
        std::cout << "Hello, World!\n";
    }

    return 0;
}
/*Output:
Hello, World!
Hello, World!
Hello, World!*/
```

### Break & Continue - Same as C#
```cpp
// break - break out of loop
// continue - skip to next iteration of loop

// continue
#include <iostream>

int main() {
    
    for (int i = 0; i < 3; i++) {
        if (i == 1) {
            break;
        }
        std::cout << "Hello, World!\n";
    }

    return 0;
}
/*Output:
Hello, World!*/

// break
#include <iostream>

int main() {
    
    for (int i = 0; i < 3; i++) {
        if (i == 1) {
            continue;
        }
        std::cout << "Hello, World!\n";
    }

    return 0;
}
/*Output:
Hello, World!
Hello, World!*/
```

### Random Number Generator (RNG) - srand
```cpp
int main() {
    // Pseudo-random number generator (Not totally random but close)
    srand(time(NULL));
    int num = rand(); // Goes up to 32767
    std::cout << num << std::endl;

    // Simulate a 6 sided die
    int num1 = (rand() % 6) + 1; // 0 to 5 + 1 = 1 to 6
    std::cout << num1 << std::endl;

    return 0;
}
/*Output:
21229
6*/
```