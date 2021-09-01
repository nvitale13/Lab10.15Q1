#include <iostream>
#include <string>
#include <algorithm>


using std::cout;
using std::cin;
using std::endl;

void isPalindrome();
void isAlphaStr();
void countChar();
 
int main()
{
  countChar();


  isPalindrome();

  isAlphaStr();

 
}
void countChar(){
std::string s = "C++,Java";
char ch = '+';
 int count = std::count(s.begin(), s.end(), ch);
    std::cout << "Character " << ch << " occurs " << count << " times";

    std::cout << "\n\n------------\n\n";
}

char string[80];

void isPalindrome(){ 

  cout << "Enter a string: ";
  cin.getline(string, 80);

  int len;
  for(len = 0; string[len] != '\0'; len++);

  int i, j, flag = 1;

  for (i = 0, j = len - 1; i < j; i++, j--)
  {
    if (string[i] != string [j])
    {
      flag = 0;
      break;
    }
  }
  if (flag)
    cout << "It's a palindrome." << endl;
  else
     cout << "It's not a palindrome." << endl;

     std::cout << "\n\n------------\n\n";

}

void isAlphaStr(){
int i=0;
  char str[]="A+!";
  while (str[i])
  {
    if (isalpha(str[i])) printf ("character %c is alphabetic\n",str[i]);
    else printf ("character %c is not alphabetic\n",str[i]);
    i++;
  }
  std::cout << "\n\n------------\n\n";
}
