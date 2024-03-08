
#include <cmath>
#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>

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
        cout << "!";
        }
    }else {
        cout << "!";
    }
}

void exercise_2(double A, double B, double C) {
    
    if (A == 0) {
        // La ecuación no es cuadrática
        if (B != 0) {
            // La ecuación es lineal
            double raiz = -C / B;
            std::cout << raiz << std::endl;
        } else {
            // La ecuación es degenerada (0x + 0 = C)
            if (C == 0) {
                // Infinitas soluciones
                std::cout << "Infinitas soluciones" << std::endl;
            } else {
                // No hay solución
                
            }
        }
    } else {
        // Calcular el discriminante
        double discriminante = B * B - 4 * A * C;

        if (discriminante > 0) {
            // Dos raíces reales distintas
            double raiz1 = (-B + sqrt(discriminante)) / (2 * A);
            double raiz2 = (-B - sqrt(discriminante)) / (2 * A);
            std::cout << raiz1 << " " << raiz2 << std::endl;
        } else if (discriminante == 0) {
            // Una raíz real (doble)
            double raiz = -B / (2 * A);
            std::cout << raiz << std::endl;
        } else {
            // Raíces complejas (ignoradas)
            
        }
    }
}

void exercise_3(int a, int b) {  
    
    if (b != 0){
        unsigned long int division = a/b;
        cout << division << "\n";
    }else{ 
    cout << "Impossible\n";
    }
}

void exercise_4(double n, double a, double b, double x, double y) {
  float descuento_1 = x / 100;
    float descuento_2 = y / 100;
    
    if (n < a){
        cout << n << "\n";        
    }else if (n >= a && n < b){
        float descuento_pequeño = n - (n * descuento_1);
        cout << descuento_pequeño << "\n";
    }else {
        float descuento_grande = n - (n * descuento_2);
        cout << descuento_grande << "\n";
    }
}

void exercise_5(char character) {
  int character_ascii = character;
    if (character_ascii >= 0 && character_ascii<=64){
        cout << "not an alphabet\n";
    }else if(character_ascii > 64 && character_ascii<=90){
        cout << "upper-case alphabet\n";
    }else if(character_ascii > 90 && character_ascii<=96){
        cout << "not an alphabet\n";
    }else if(character_ascii > 96 && character_ascii<=122){
        cout << "lower-case alphabet\n";
    }else if(character_ascii > 122 && character_ascii<=126){
        cout << "not an alphabet\n";
    }
}

void exercise_6(int number) {
   switch (number) {
        
    case 1:
        cout << "Monday\n";
        break;
    case 2:
        cout << "Tuesday\n";
        break;
    case 3:
        cout << "Wednesday\n";
        break;
    case 4:
        cout << "Thursday\n";
        break;
    case 5:
        cout << "Friday\n";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday\n";
        break;
    default:
        cout << "Invalid input\n";
        break;
   }
}

void exercise_7(double r) {
   if (r < 0){
       cout << "Error: Radius cannot be negative.\n";
   }else {
        double power = pow(r, 2);
        double area = 4 * M_PI * power;
        cout << fixed << setprecision(6) << area << "\n";
   }
}

void exercise_8(long int seconds) {
    
    int hours;
    int minutes;
    
    int totalSeconds = seconds;

    hours = totalSeconds / 3600;

    
    int remainingSeconds = totalSeconds % 3600;

    
    minutes = remainingSeconds / 60;

    
    seconds = remainingSeconds % 60;
    
    if(hours < 10 && minutes < 10 && seconds < 10){
        string hour_value = "0"s + to_string(hours);
        string minute_value = "0"s + to_string(minutes);
        string second_value = "0"s + to_string(seconds);
        cout << hour_value << ":" << minute_value << ":" << second_value << "\n";
    }else if(hours > 10 && minutes < 10 && seconds < 10){
        string hour_value = "0"s + to_string(hours);
        string minute_value = "0"s + to_string(minutes);
        string second_value = "0"s + to_string(seconds);
        cout << hours << ":" << minute_value << ":" << second_value << "\n";
    }else if(hours > 10 && minutes > 10 && seconds < 10){
        string hour_value = "0"s + to_string(hours);
        string minute_value = "0"s + to_string(minutes);
        string second_value = "0"s + to_string(seconds);
        cout << hours << ":" << minutes << ":" << second_value << "\n";
    }else if(hours > 10 && minutes > 10 && seconds > 10){
        string hour_value = "0"s + to_string(hours);
        string minute_value = "0"s + to_string(minutes);
        string second_value = "0"s + to_string(seconds);
        cout << hours << ":" << minutes << ":" << seconds << "\n";
    }else if(hours < 10 && minutes < 10 && seconds > 10){
        string hour_value = "0"s + to_string(hours);
        string minute_value = "0"s + to_string(minutes);
        string second_value = "0"s + to_string(seconds);
        cout << hour_value << ":" << minute_value << ":" << seconds << "\n";
    }
    
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