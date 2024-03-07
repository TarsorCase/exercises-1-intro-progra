
#include <cmath>
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void exercise_1(string s1, string s2, string s3) {
  // Online C++ compiler to run C++ program online

    // Definiendo Variables
    string minimum_line;
    int i = 1;
    bool lower_case = true;
    
    //Obteniendo valor de las variables
    
    // Getting the length of each variable
    size_t line1_length = s1.length();
    size_t line2_length = s2.length();
    size_t line3_length = s3.length();
    
    for (char character1 : s1) {
        if (!std::islower(character1)) {
            lower_case = false;
            break;  
        }
    }

    for (char character2 : s2) {
        if (!std::islower(character2)) {
            lower_case = false;
            break;  
        }
    }

    for (char character3 : s3) {
        if (!std::islower(character3)) {
            lower_case = false;
            break;  
        }
    }

    if (lower_case) {
        if( line1_length <= 30 && line2_length <= 30 && line3_length <= 30 ){
            minimum_line = s1;
            if (s2 < minimum_line) {
            minimum_line = s2;
            }else if (s3 < minimum_line) {
            minimum_line = s3;
            }
            cout << minimum_line;
        }else {
        cout << "Una de las oraciones o palabras excede los 30 caracteres permitidos";
        }
    }else {
        cout << "No todos los caracteres son minúsculas." << endl;
    }
}

void exercise_2(double A, double B, double C) {
    
    double discriminant = B * B - 4 * A * C;

    
    if (discriminant > 0) {
        double x1 = (-B + sqrt(discriminant)) / (2 * A);
        double x2 = (-B - sqrt(discriminant)) / (2 * A);
        cout << x1 << " " << x2;
    } else if (discriminant == 0) {
        double x = -B / (2 * A);
        cout << x ;
    } else {
        
    }
    return 0;
}

void exercise_3(int a, int b) {  
    
    if (b != 0){
        unsigned long int division = a/b;
        cout << "division";
    }else{ 
    cout << "Impossible";
    }
    return 0;
}

void exercise_4(double n, double a, double b, double x, double y) {
  // TODO: YOUR CODE HERE
}

void exercise_5(char character) {
  // TODO: YOUR CODE HERE
}

void exercise_6(int number) {
  // TODO: YOUR CODE HERE
}

void exercise_7(double r) {
  // TODO: YOUR CODE HERE
}

void exercise_8(long int seconds) {
  // TODO: YOUR CODE HERE
}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
  // TODO: YOUR CODE HERE
  return "";
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
}

string exercise_11(int number) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {
  // TODO: YOUR CODE HERE
}

string exercise_13(int age, int years_of_experience) {
  // TODO: YOUR CODE HERE
  return "";
}

string exercise_14(int number_of_docs) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int a, int b, int c) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int debut, int fin) {
  // TODO: YOUR CODE HERE
}