#include <iostream>
#include "tddFuncs.h"
#include "WordCount.h"
using namespace std;

int main() {
  WordCount hashTable; 
  assertEquals("", hashTable.stripWord(""), "list.stripWord(\"\")", 8);
  assertEquals("", hashTable.stripWord(")"), "list.stripWord(\")\")", 9);
  assertEquals("a", hashTable.stripWord("$a$"), "list.stripWord(\"$a$\")", 10);

  assertEquals("hello", hashTable.stripWord("hello"), "list.stripWord(\"hello\")", 12);
  assertEquals("h-e-l-l-o", hashTable.stripWord("-h-e-l-l-o-"), "list.stripWord(\"-h-e-l-l-o-\")",13);
  assertEquals("hello", hashTable.stripWord("hello**"), "list.stripWord(\"hello**\")", 14);
  assertEquals("hello", hashTable.stripWord("hell)o--"), "list.stripWord(\"hell(o--\")",15);
  assertEquals("hello", hashTable.stripWord("h*e**ll*o--"), "list.stripWord(\"h*e**ll*o\"), 16");

  assertEquals("Nico's", hashTable.stripWord("Nico's'"), "list.stripWord(\"Nico's''\")", 18);
  assertEquals("mOnKeYs", hashTable.stripWord("mOnKeYs"), "hashTable.stripWord(\"mOnKeYs\")", 19);
  return 0;
}
