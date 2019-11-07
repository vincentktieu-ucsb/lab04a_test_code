// WordCount.h

#ifndef WORDCOUNT_H
#define WORDCOUNT_H

#include <iostream>
#include <string>
#include <vector>
#include <utility>

class WordCount {
public:
  WordCount();

  int getTotalWords() const;
  // Return total number of word occurrences (for all words) in the
  // hash table.

  int getNumUniqueWords() const;
  // Return total number of unique words in the hash table. Note that
  // multiple occurrences of a word is considered one unique word.

  int getWordCount(std::string word) const;
  // Return the number of occurences for a specific word.
  // You may not assume the parameter is a valid word and must
  // strip / convert to upper case before looking in the hash table.
  // If the word does not exist in the table, return 0

  int incrWordCount(std::string word);
  // Update the hash table by incrementing the number of occurences for
  // the word. You may not assume the parameter word is a valid word.
  // Words must be hashed and stored containing all upper-case
  // characters. If the word not in the table, then add it. If the word
  // was added, this function returns the current number of occurences of
  // the word after it was added.

  static bool isWordChar(char c);
  // May be useful as a helper function in your code.
  // Returns true if c is a valid word character defined as either
  // a lower-case or upper-case alpha char.

  static std::string stripWord(std::string word);
  // Words cannot contain any digits or special characters EXCEPT for
  // hyphens (-) and apostrophes (') that occur in the middle of a
  // valid word (the first and last characters of a word must be an alpha
  // character).
  // For example, "can't" and "good-hearted" are considered valid words.
  // "12mOnkEYs-$" will be stripped to "mOnkEYs"

private:
  const static size_t CAPACITY = 100;
  // capacity for the hash table array

  std::vector<std::pair<std::string, size_t> > table[CAPACITY];
  // hash table array of vectors. Each index in the array will contain
  // a vector. Each element in the vector contains a <string, size_t>
  // pair where the string value represents a unique word and the size_t
  // value represents the number of occurences for that word.

  size_t hash(std::string word) const;
  // Hash function that will return an index for the hash table.
};


#endif // WORDCOUNT_H
