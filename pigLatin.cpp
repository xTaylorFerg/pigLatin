#include <iostream>
#include <string>
using namespace std;

int main()
{
   string str;
   bool vowelFlag = false;    // Boolean flag for first letter of word

   cout << "Enter a word to be translated into Pig Latin: " << endl;
   cin >> str;

   // Converts string entered by user to lowercase
   for(int i = 0; i <= (str.length()-1); i++)
      str[i] = tolower(str[i]);

   // Tests for a string beginning with a vowel
   if(str[0] == 'a' || str[0] == 'e' || str[0] == 'i' || str[0] == 'o' || str[0] == 'u') {
      vowelFlag = true;
      cout << "vowelFlag is set to true" << endl;
   }

   // For loop goes through entire string letter by letter
   for(int i = 0; i <= (str.length()-1); i++) {
      if(vowelFlag == false && i == 0) {     // If no beginning vowel and currently on first letter,
         str = str + str[0];                 // add first letter of string to the end of the string,
         str[i] = str[i+1];                  // and copy the second letter into the first string position.
         cout << i << endl;
         cout << str << endl;
      } else if(vowelFlag == true && i == 0) {
         cout << i << endl;                  // If string starts with a vowel and currently on first letter,
         cout << str << endl;                // DO NOTHING BESIDES OUTPUT 
      } else if(vowelFlag == false && i <= (str.length()-1)) {
         str[i] = str[i+1];                  // If no beginning vowel and currently not at the end of the string
         cout << i << endl;                  // replace letter current letter with the next
         cout << str << endl;
      } else if(vowelFlag == true && i <= (str.length()-1)) {
         cout << i << endl;                  // If string starts with a vowel and currently not at the end of the string
         cout << str << endl;                // DO NOTHING BESIDES OUTPUT
      }
   }
   
   // If the boolean flag was set to true then add "yay" to end of string
   // If it was left at false then add normal Pig Latin "ay" to end of string
   if(vowelFlag == true)
      str = str + "yay";
   if(vowelFlag == false)
      str = str + "ay";

   cout << "(final) = " << str << endl;
   
   return 0;
}
