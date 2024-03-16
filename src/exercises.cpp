
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
        double area = 4 * 3.14 * power;
        cout << area << "\n";
   }
}

void exercise_8(long int seconds) {
    
    int hours;
    int minutes;
    int seconds_if = seconds;
    int totalSeconds = seconds;

    hours = totalSeconds / 3600;

    
    int remainingSeconds = totalSeconds % 3600;

    
    minutes = remainingSeconds / 60;

    
    seconds = remainingSeconds % 60;
    if( seconds_if < 0){
        cout << "Error: Input seconds cannot be negative.\n";
    }else if( seconds_if > 0){
        if(hours < 10 && minutes < 10 && seconds < 10){
            string hour_value = "0" + to_string(hours);
            string minute_value = "0" + to_string(minutes);
            string second_value = "0" + to_string(seconds);
            cout << hour_value << ":" << minute_value << ":" << second_value << "\n";
        }else if(hours >= 10 && minutes < 10 && seconds < 10){
            string hour_value = "0" + to_string(hours);
            string minute_value = "0" + to_string(minutes);
            string second_value = "0" + to_string(seconds);
            cout << hours << ":" << minute_value << ":" << second_value << "\n";
        }else if(hours >= 10 && minutes >= 10 && seconds < 10){
            string hour_value = "0" + to_string(hours);
            string minute_value = "0" + to_string(minutes);
            string second_value = "0" + to_string(seconds);
            cout << hours << ":" << minutes << ":" << second_value << "\n";
        }else if(hours >= 10 && minutes >= 10 && seconds >= 10){
            string hour_value = "0" + to_string(hours);
            string minute_value = "0" + to_string(minutes);
            string second_value = "0" + to_string(seconds);
            cout << hours << ":" << minutes << ":" << seconds << "\n";
        }else if(hours < 10 && minutes < 10 && seconds >= 10){
            string hour_value = "0" + to_string(hours);
            string minute_value = "0" + to_string(minutes);
            string second_value = "0" + to_string(seconds);
            cout << hour_value << ":" << minute_value << ":" << seconds << "\n";
        }
    }else {
        string hour_value = "0" + to_string(hours);
        string minute_value = "0" + to_string(minutes);
        string second_value = "0" + to_string(seconds);
        cout << hour_value << ":" << minute_value << ":" << second_value << "\n";
    }
}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
    char ch1 = s1[0];
    char ch2 = s2[0];
    char ch3 = s3[0];
    char ch4 = s4[0];
    char ch5 = s5[0];
    cout << ch1 << ch2 << ch3 << ch4 << ch5 << "\n";
    if(ch1 == ch5){
        return "Hemos encontrado algo!";
    }else {
        return "Aun sin suerte";
    }
  
}

int exercise_10(int a, int b) {
   if(a < 0 || b < 0 ){
        int cero = 0;
        return cero;
    }else{
        unsigned long int sum_num = a + b;
        string size_num_string = to_string(sum_num);
        unsigned long int size_num = size_num_string.size();
        unsigned long int product = size_num * sum_num;
        return product;
    }
}

string exercise_11(int number) {
 if(number == 11235813){
    return "Se encontro a Fibonacci";
 }else{
    return "Esto no es de Fibonacci";
 }
}

void exercise_12(string color1, int num_pisos1,
                 string color2, int num_pisos2,
                 string color3, int num_pisos3,
                 string color_transeunte, int num_pisos_transeunte) {
    
    if(num_pisos_transeunte == -1){
        if (color_transeunte == color1 && 
        color_transeunte == color2){
            cout << num_pisos2 << "\n";
            cout << num_pisos1 << "\n"; 
        }else if(color_transeunte == color1 && 
        color_transeunte == color3){
            cout << num_pisos3 << "\n";
            cout << num_pisos1 << "\n"; 
        }else if(color_transeunte == color2 && 
        color_transeunte == color3){
            cout << num_pisos3 << "\n";
            cout << num_pisos2 << "\n"; 
        } 
        
    }else if(num_pisos_transeunte == num_pisos1 && num_pisos_transeunte == num_pisos2 && num_pisos_transeunte == num_pisos3 && color_transeunte == color1 &&  num_pisos_transeunte == num_pisos1 && color_transeunte == color2 &&  num_pisos_transeunte == num_pisos2 && color_transeunte == color3 &&  num_pisos_transeunte == num_pisos3){ cout << "1\n" << "2\n" << "3\n";
        
    }else if(num_pisos_transeunte == num_pisos1 || num_pisos_transeunte == num_pisos2 || num_pisos_transeunte == num_pisos3){
        if (color_transeunte == color1 && num_pisos_transeunte == num_pisos1){
            cout << num_pisos1 << "\n";
        }else if(color_transeunte == color2 && num_pisos_transeunte == num_pisos2){
            cout << num_pisos2 << "\n"; 
        }else if(color_transeunte == color3 && num_pisos_transeunte == num_pisos3){
            cout << num_pisos3 << "\n";
        }    
    }
   
}

string exercise_13(int age, int years_of_experience) {
    if (age >= 18){
        if(years_of_experience < 3){
            return "Project coordinator"; 
            
        }else if(years_of_experience >= 3 && years_of_experience < 5){
            return "Project manager"; 
            
        }else if(years_of_experience >= 5){
            return "Senior project manager"; 
        }
    }else {
        return "Not eligible";
    }
}

string exercise_14(int number_of_docs) {
    if (number_of_docs > 1){
        string docs = to_string(number_of_docs) + " documentos encontrados";
        return docs;
    }else if(number_of_docs < 1){
        return "No se encontraron documentos";
    }else if(number_of_docs == 1) {
        return "Se encontro un documento";
    }
}

void exercise_15(int a, int b, int c) {
    int t;
    cout << "Los valores son: a = " << a << " b = " << b << " y c = " << c << "\n";
    cout << "Permutamos: a => b, b => c, c => a\n";
    
    t = a;
    a = c;
    c = b;
    b = t;
    
    cout << "Los valores despues de la permutacion son: a = " << a << " b = " << b << " c = " << c << "\n";
}

void exercise_16(int debut, int fin) {
  if( debut < 0 || debut > 24 || fin < 0 || fin > 24){
        
        cout << "Las horas deben estar entre 0 y 24!\n"; 
    }else if(fin > debut){
        int result = 0;
        int contador1 = 0;
        int contador2 = 0;
        int i = debut;
        while(i < fin){
             if(i > 7 && i < 17){
                result = result + 2;
                contador2 = contador2 + 1;
            }else if(i <= 7 || i >= 17){
                result = result + 1;
                contador1 = contador1 + 1;
            }
        ++i;
        }
        cout << "Haz alquilado una bicicleta por\n";
        if(contador2 == 0){
            cout << contador1 << " hora(s) con el tarifario de 1 boliviano(s)\n";
        }else if(contador1 == 0){
            cout << contador2 << " hora(s) con el tarifario de 2 boliviano(s)\n";
        }else{
            cout << contador1 << " hora(s) con el tarifario de 1 boliviano(s)\n";
            cout << contador2 << " hora(s) con el tarifario de 2 boliviano(s)\n";
        }
            cout << "El monto total a pagar es de " << result << " boliviano(s).\n";
    }else if(fin == debut){
    
        cout << "Que extraño, no has alquilado tu bicicleta por mucho tiempo!\n";
    
    }else if(fin < debut) {
        
        cout << "Que extraño, el inicio del alquiler es después del final...\n";
    }
}