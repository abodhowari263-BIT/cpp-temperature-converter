#include <iostream>

using namespace std;

int main()
{
    double temp_initial, temp_final;
    //temp_initial is the starting temprature 
    //temp_final  is  the  converted temprature 
    
    char intial_temp_unit, final_temp_unit , choice;
    
    //intial_temp_unit : the intial tempratures unit
    //final_temp_unit  : the final temprature unit

    cout << "=== TEMPERATURE CONVERTER === \n\n";

    do 
    {
        cout << "What  is the  current temperature ?  ";
        cin >> temp_initial;
        //entering the intial temprature

        cout << "What is the  temperature unit ? \n" ;
        cout << "Enter  the 'C' for Celsius 'F' for Fahrenheit and 'K' for Kelvin\n" ;
        cin >> intial_temp_unit ;
        //entering the initial temprature unit


        while (intial_temp_unit != 'C' && intial_temp_unit != 'c' && intial_temp_unit != 'F'&& intial_temp_unit != 'f'&& intial_temp_unit != 'K' && intial_temp_unit != 'k'){
            cout<<"invalid  temperature unit ! \n" ; 
            cout << "Enter  the 'C' for Celsius 'F' for Fahrenheit and 'K' for Kelvin\n";
            cin >> intial_temp_unit;
        } 
        //A while  statement that makes  sure that the user  only inputs the correct unit
        
         //nested if - else state  for each scenario of conversion
        if (intial_temp_unit == 'C' || intial_temp_unit == 'c')
        {
            cout << "Input 'F' to convert to Fahrenheit Or 'K' to to convert to Kelvin  ";
            cin >> final_temp_unit; 

            while (final_temp_unit != 'F' && final_temp_unit != 'f' && final_temp_unit != 'K' && final_temp_unit != 'k'){
                cout <<"Invalid temperature unit\n";
                cout << "Input 'F' to convert to Fahrenheit Or 'K' to to convert to Kelvin  ";
                cin>> final_temp_unit;

            }

        //A while  statement that makes  sure that the user  only inputs the correct unit
        
            
            
            if (final_temp_unit == 'F' || final_temp_unit == 'f')
            {
                temp_final = temp_initial * 1.8 + 32;
                cout << "The temperature in  celsius is :" << temp_initial << intial_temp_unit << "°\n" << "The temperature in  fahrenheit is :" << temp_final << final_temp_unit <<"°\n";  
            }
            else if (final_temp_unit == 'K' || final_temp_unit == 'k')
            {
                temp_final = temp_initial + 273.15;
                cout << "The temperature in  celsius is :" << temp_initial << intial_temp_unit << "°\n" << "The temperature in  kelvin is :" << temp_final << final_temp_unit <<"°\n" ; 
        
            }
    }
    else if (intial_temp_unit == 'F' || intial_temp_unit == 'f'){
        cout << "Input 'C' to convert to Celsius Or 'K' to to convert to Kelvin  ";
        cin >> final_temp_unit;


            while (final_temp_unit != 'C' && final_temp_unit != 'c' && final_temp_unit != 'K' && final_temp_unit != 'k'){
                cout <<"Invalid temperature unit";
                cout << "Input 'C' to convert to Fahrenheit Or 'K' to to convert to Kelvin  ";
                cin>> final_temp_unit;

            }

        //A while  statement that makes  sure that the user  only inputs the correct unit
        
          if (final_temp_unit == 'C' || final_temp_unit == 'c')
            {
                temp_final = (temp_initial - 32) / 1.8;
                cout << "The temperature in fahrenheit  is :" << temp_initial << intial_temp_unit << "°\n" << "The temperature in  celsius is :" << temp_final << final_temp_unit <<"°\n" ; 
            }
            else if (final_temp_unit == 'K' || final_temp_unit == 'k')
            {
                temp_final = ( temp_initial + 459.67) * 5 / 9;
                cout << "The temperature in  fahrenheit is :" << temp_initial << intial_temp_unit << "°\n" << "The temperature in  kelvin is :" << temp_final << final_temp_unit <<"°\n" ; 
        
            }


    }
    else if (intial_temp_unit == 'K' || intial_temp_unit == 'k'){
        cout << "Input 'C' to convert to Celsius Or 'F' to to convert to Fahrenheit  ";
        cin >> final_temp_unit;
        
        while (final_temp_unit != 'C' && final_temp_unit != 'c' && final_temp_unit != 'F' && final_temp_unit != 'f'){
                cout <<"Invalid temperature unit";
                cout << "Input 'C' to convert to Fahrenheit Or 'F' to to convert to Kelvin  ";
                cin>> final_temp_unit;
        }

        //A while  statement that makes  sure that the user  only inputs the correct unit
        
          if (final_temp_unit == 'C' || final_temp_unit == 'c')
            {
                temp_final = temp_initial - 273.15;
                cout << "The temperature in kelvin  is :" << temp_initial << intial_temp_unit << "°\n" << "The temperature in  celsius is :" << temp_final << final_temp_unit <<"°\n" ; 
            }
            else if (final_temp_unit == 'F' || final_temp_unit == 'f')
            {
                temp_final =  temp_initial * 1.8 - 459.67;
                cout << "The temperature in  kelvin is :" << temp_initial << intial_temp_unit << "°\n" << "The temperature in  fahrenheit is :" << temp_final << final_temp_unit <<"° \n"; 
        
            }
    }
     cout << "do you  want  to convert another temprature ? (y / n) " ;
     cin >> choice ;
     while (choice !='Y' && choice != 'y' && choice != 'N' &&choice != 'n'){
        cout<<"invalid  input ! please  enter  y or n ";
        cin >> choice;
     }

        //A while  statement that makes  sure that the user  only inputs the correct answer
        
    } while (choice == 'Y' || choice == 'y') ; 
     // the while  statment for the do that  makes it go in a loop if true and exits if false
    cout<< " See you soon :)";
}