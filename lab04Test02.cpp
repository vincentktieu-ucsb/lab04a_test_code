#include <iostream>
#include "tddFuncs.h"
#include "WordCount.h"

using namespace std;

int main() {
  WordCount hashTable;
  assertEquals(0, hashTable.incrWordCount(""), "hashTable.incrWordCount(\"\")", 9);
  assertEquals(0, hashTable.incrWordCount("$$$---"), "hashTable.incrWordCount(\"$$$---\")", 11);
  assertEquals(1, hashTable.incrWordCount("-h-e-l-l-o-"), "hashTable.incrWordCount(\"-h-e-l-l-o-\")", 10);
  assertEquals(1, hashTable.incrWordCount("cold-blooded"), "hashTable.incrWordCount(\"cold-blooded\")", 12);

  assertEquals(1, hashTable.incrWordCount("hello"), "hashTable.incrWordCount(\"hello\")", 14);
  assertEquals(2, hashTable.incrWordCount("hello"), "hashTable.incrWordCount(\"hello\")", 15);
  assertEquals(3, hashTable.incrWordCount("HELLO"), "hashTable.incrWordCount(\"HELLO\")", 16);
  assertEquals(4, hashTable.incrWordCount("-hellO"), "hashTable.incrWordCount(\"-hellO\")", 17);

  assertEquals(2, hashTable.incrWordCount("--cold-blooded"), "hashTable.incrWordCount(\"cold-blooded-\")", 19);
  assertEquals(3, hashTable.incrWordCount("--cOld-bLooDED''"), "hashTable.incrWordCount(\"--cOld-bLooDED-\")", 20);
  return 0;
}
