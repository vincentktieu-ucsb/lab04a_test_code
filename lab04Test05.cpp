#include <iostream>
#include "tddFuncs.h"
#include "WordCount.h"
using namespace std;

int main () {
  WordCount hashTable;

  assertEquals(0, hashTable.getTotalWords(), "hashTable.getTotalWords()", 9);
  hashTable.incrWordCount("one");
  assertEquals(1, hashTable.getTotalWords(), "hashTable.getTotalWords()", 11);
  hashTable.incrWordCount("two");
  assertEquals(2, hashTable.getTotalWords(), "hashTable.getTotalWords()", 13);
  hashTable.incrWordCount("two");
  assertEquals(3, hashTable.getTotalWords(), "hashTable.getTotalWords()", 15);
  hashTable.incrWordCount("three");
  assertEquals(4, hashTable.getTotalWords(), "hashTable.getTotalWords()", 17);
  hashTable.incrWordCount("three");
  assertEquals(5, hashTable.getTotalWords(), "hashTable.getTotalWords()", 19);
  hashTable.incrWordCount("three");
  assertEquals(6, hashTable.getTotalWords(), "hashTable.getTotalWords()", 21);
  return 0;
}
