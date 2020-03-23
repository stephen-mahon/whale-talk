//
// File: main.cpp
// Topic: Vectors
//

#include <iostream>
#include <vector>
#include <string>
int main() {

  std::string phrase;

  std::cout << "Human talk: ";
  std::getline(std::cin,phrase);

  std::string letters = "aeiou";
  std::vector<char> vowels;
  std::vector<char> result;

  for(int h = 0; h < letters.size(); h++) {
    vowels.push_back(letters[h]);
  }

  for(int i = 0; i < phrase.size(); i++) {
    for(int j = 0; j < vowels.size(); j++) {
      if(phrase[i] == vowels[j]){
        result.push_back(phrase[i]);
      }
    }
    if(phrase[i] == 'e') {
      result.push_back(phrase[i]);
    } else if(phrase [i] == 'u') {
      result.push_back(phrase[i]);
    }
  }

  std::cout << "Whale talk: ";
  for(int k = 0; k < result.size(); k++) {
    std::cout << result[k];
  }

  std::cout << std::endl;
  return 0;
}
