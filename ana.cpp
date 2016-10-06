#include<iostream>
#include<string>

using std::string;
using std::cout;
using std::endl;

void ana(std::string,std::string);
void anagram(std::string);

void anagram(std::string word) {
   size_t length = word.length();
   for(int i = 0; i < length; i++)
      ana(word.substr(i,1),word.substr(0,i)+word.substr(i+1,length-1));

}

void ana(std::string suffix, std::string word) {
   size_t length = word.length();

   if(length <= 2) {
      cout << suffix << word << endl;
      if(length == 2)
         cout << suffix << word[1] << word[0] << endl;
      return;
   }

   for(int i = 0; i < length; i++)
      ana(suffix + word.substr(i,1),word.substr(0,i)+word.substr(i+1,length-1));
}


int main()
{
   anagram("recursion");
}
