#include <iostream>
#include "tddFuncs.h"
#include "WordCount.h"

int main() {
  WordCount hashTable;
  assertEquals(0, hashTable.getNumUniqueWords(), "hashTable.getNumUniqueWords()", 7);
  hashTable.incrWordCount("one");
  assertEquals(1, hashTable.getNumUniqueWords(), "hashTable.getNumUniqueWords()", 9);
  hashTable.incrWordCount("two");
  assertEquals(2, hashTable.getNumUniqueWords(), "hashTable.getNumUniqueWords()", 11);
  hashTable.incrWordCount("two");
  assertEquals(2, hashTable.getNumUniqueWords(), "hashTable.getNumUniqueWords()", 13);
  hashTable.incrWordCount("three");
  assertEquals(3, hashTable.getNumUniqueWords(), "hashTable.getNumUniqueWords()", 15);
  hashTable.incrWordCount("three");
  assertEquals(3, hashTable.getNumUniqueWords(), "hashTable.getNumUniqueWords()", 17);
  hashTable.incrWordCount("three");
  assertEquals(3, hashTable.getNumUniqueWords(), "hashTable.getNumUniqueWords()", 19);
  hashTable.incrWordCount("---");
  assertEquals(3, hashTable.getNumUniqueWords(), "hashTable.getNumUniqueWords()", 21);
  return 0;
}
