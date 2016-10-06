#include<iostream>
#include<string>

using std::string;
using std::cout;
using std::endl;

void ana(const string& suffix, const string& word) {
   size_t length = word.length();

   // Base cases.
   if(length <= 2) {
      cout << suffix << word << endl;
      if(length == 2)
         cout << suffix << word[1] << word[0] << endl;
      return;
   }

   for(int i = 0; i < length; i++)
      ana(suffix + word.substr(i, 1), word.substr(0, i) + word.substr(i + 1, length - 1));
}

void anagram(const string& word) {
   size_t length = word.length();

   for(int i = 0; i < length; i++)
      ana(word.substr(i, 1), word.substr(0, i) + word.substr(i + 1, length - 1));
}

int main()
{
   anagram("justin");
}
