#include <iostream>
#include "tddFuncs.h"
#include "WordCount.h"

using namespace std;

int main() {
  WordCount hashTable;
  hashTable.incrWordCount("");
  hashTable.incrWordCount("");
  assertEquals(0, hashTable.getWordCount(""), "hashTable.getWordCount(\"\")", 11);

  assertEquals(0, hashTable.getWordCount("hello"), "hashTable.getWordCount(\"hello\")", 13);
  hashTable.incrWordCount("hello");
  assertEquals(1, hashTable.getWordCount("hello"), "hashTable.getWordCount(\"hello\")", 15);
  hashTable.incrWordCount("hello--");
  assertEquals(2, hashTable.getWordCount("hello"), "hashTable.getWordCount(\"hello\")", 17);
  hashTable.incrWordCount("hell-o");
  assertEquals(2, hashTable.getWordCount("hello"), "hashTable.getWordCount(\"hello\")", 19);
  hashTable.incrWordCount("HELLO");
  assertEquals(3, hashTable.getWordCount("hello"), "hashTable.getWordCount(\"hello\")", 21);
  hashTable.incrWordCount("'hello'");
  assertEquals(4, hashTable.getWordCount("hello"), "hashTable.getWordCount(\"hello\")", 23);
  return 0;
}
