#include<iostream>
#include<string>
#include<sstream>

using std::string;
using std::cout;
using std::endl;
using std::ostringstream;

/* Main function */
void ana(const string& prefix, const string& word) {
   size_t length = word.length();

   // An anagram of a one character word is itself.
   if(length <= 1) {
      cout << prefix << word << endl;
      return;
   }

   for(int i = 1; i < length; i++)
      ana(prefix + word.substr(i,1), word.substr(0, i) + word.substr(i + 1));
}

/* Wrapper function. */
inline void anagram(string word) { (ana("", word)); };

int main() {
   anagram("justin");
}
