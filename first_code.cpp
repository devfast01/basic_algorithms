// if_18

// #include <iostream>
// using namespace std;

// int main() {
//     cout << "\n";
//     int int_1;
//     int int_2;
//     int int_3;
    
//     cin>> int_1;
//     cin>> int_2;
//     cin>> int_3;
    
    // if (int_1 == int_2)
    // {
    //     cout<< "tertiip: 3 \n";
    // }else  if (int_1 == int_3){
    //     cout<< "tertiip: 2 \n";
    // }else  if (int_2 == int_3){
    //     cout<< "tertiip: 1 \n";
    // }else{
    //     cout<< "tapawutly sanlar ! \n";
    // }

//     cout << "\n";
//   return 0;
// }



// case_19 (from english version)

// #include <iostream>
// using namespace std;

// int main() {
//     int year;
//     cout << "Enter the year: ";
//     cin >> year;

//     // Determine the offset from 1984
//     int offset = year - 1984;

//     // Calculate the index for the color and animal
//     int colorIndex = (offset % 60) % 5;
//     int animalIndex = (offset % 12 + 12) % 12;

//     // Determine the color using switch
//     string color;
//     switch (colorIndex) {
//         case 0:
//             color = "Green";
//             break;
//         case 1:
//             color = "Red";
//             break;
//         case 2:
//             color = "Yellow";
//             break;
//         case 3:
//             color = "White";
//             break;
//         case 4:
//             color = "Black";
//             break;
//     }

//     // Determine the animal using switch
//     string animal;
//     switch (animalIndex) {
//         case 0:
//             animal = "Rat";
//             break;
//         case 1:
//             animal = "Cow";
//             break;
//         case 2:
//             animal = "Tiger";
//             break;
//         case 3:
//             animal = "Hare";
//             break;
//         case 4:
//             animal = "Dragon";
//             break;
//         case 5:
//             animal = "Snake";
//             break;
//         case 6:
//             animal = "Horse";
//             break;
//         case 7:
//             animal = "Sheep";
//             break;
//         case 8:
//             animal = "Monkey";
//             break;
//         case 9:
//             animal = "Hen";
//             break;
//         case 10:
//             animal = "Dog";
//             break;
//         case 11:
//             animal = "Pig";
//             break;
//     }

//     // Output the result
//     cout << "The year " << year << " is the year of the " << color << " " << animal << "." << endl;

//     return 0;
// }

// // case_18 (from english version)
// #include <iostream>
// using namespace std;

// int main() {
//     cout << "\n";
//     int a,b,c,d,q;
//     string p,o,i;
    
//     cin>> a;
    
//     b = a / 100;
//     c = a % 100;
//     d = c / 10;
//     q = c % 10;

//     switch (b) {
//         case 1:
//             p = "bir";
//             break;
//         case 2:
//             p = "iki";
//             break;
//         case 3:
//             p = "uc";
//             break;
//         case 4:
//             p = "dort";
//             break;
//         case 5:
//             p = "bas";
//             break;
//         case 6:
//             p = "alty";
//             break;
//         case 7:
//             p = "yedi";
//             break;
//         case 8:
//             p = "sekiz";
//             break;
//         case 9:
//             p = "dokuz";
//             break;    
//     }

//        switch (d) {
//         case 0:
//             o = "";
//             break;
//         case 1:
//             o = "on";
//             break;
//         case 2:
//             o = "yigrimi";
//             break;
//         case 3:
//             o = "otuz";
//             break;
//         case 4:
//             o = "kyrk";
//             break;
//         case 5:
//             o = "elli";
//             break;
//         case 6:
//             o = "alytmys";
//             break;
//         case 7:
//             o = "yetmis";
//             break;
//         case 8:
//             o = "segsen";
//             break;
//         case 9:
//             o = "togsan";
//             break;    
//     }

//     switch (q) {
//         case 0:
//             i = "";
//             break;
//         case 1:
//             i = "bir";
//             break;
//         case 2:
//             i = "iki";
//             break;
//         case 3:
//             i = "uc";
//             break;
//         case 4:
//             i = "dort";
//             break;
//         case 5:
//             i = "bas";
//             break;
//         case 6:
//             i = "alty";
//             break;
//         case 7:
//             i = "yedi";
//             break;
//         case 8:
//             i = "sekiz";
//             break;
//         case 9:
//             i = "dokuz";
//             break;    
//     }


//     cout << a << "=" << p << "yuz" << o << i;

//     cout << "\n";
//   return 0;
// }




// // case_19 (from turkmen version)
// #include <iostream>
// using namespace std;

// int main() {
//     cout << "\n";
//     int a,b,c,d,q;
//     string p,o,i;
    
//     cin>> a;
    
//     b = a - 2006;
//     c = (b % 12 + 12) % 12;

//     switch (c)
//     {
//     case 0 :
//       p = "It";
//       break;
//     case 1 :
//       p = "Donuz";
//       break;
//     case 2:
//       p = "Sycan";
//       break;
//     case 3:
//       p = "Sygyr";
//       break;
//     case 4:
//       p = "Bars";
//       break;
//     case 5:
//       p = "Towsan";
//       break;
//     case 6:
//       p = "Luw";
//       break; 
//     case 7:
//       p = "Yylan";
//       break;  
//     case 8:
//       p = "Yylky";
//       break;
//     case 9:
//       p = "Koy";
//       break;  
//     case 10:
//       p = "Bijin";
//       break; 
//     case 11:
//       p = "Takyk";
//       break; 

//     default:
//       break;
//     }

//     cout<< p;

//     cout << "\n";
//   return 0;
// }

