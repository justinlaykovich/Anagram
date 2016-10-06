#include<iostream>
#include<string>

using std::string;
using std::cout;
using std::endl;

/* Main function */
void ana(const string& suffix, const string& word) {
   size_t length = word.length();

   // An anagram of a one character word is itself.
   if(length <= 1) {
      cout << suffix << word << endl;
      return;
   }

   for(int i = 0; i < length; i++)
      ana(suffix + word.substr(i, 1), word.substr(0, i) + word.substr(i + 1, (length - i) - 1));
}

/* Wrapper function. */
void anagram(const string& word) {
   size_t length = word.length();

   if(length <= 1) {
      cout << word << endl;
      return;
   }

   for(int i = 0; i < length; i++)
      ana(word.substr(i, 1), word.substr(0, i) + word.substr(i + 1, (length - i) - 1));
}

int main()
{
   anagram("justin");
   anagram("a");
   anagram("");
}
