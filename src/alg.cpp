// Copyright 2021 NNTU-CS
#include  <iostream>
#include  <fstream>
#include  <locale>
#include  <cstdlib>
#include  "bst.h"

BST<std::string> makeTree(const char* filename) {
BST<std::string>TREE;
char Down = 'a' - 'A';
    std::string Word = "";
    std::ifstream file(filename);
if (!file) {
std::cout << "File error!" << std::endl;
return TREE;
}
while (!file.eof()) {
char Letter = file.get();
if ((Letter >= 'a' && Letter <= 'z') || (Letter >= 'A' && Letter <= 'Z')) {
if (Letter >= 'A' && Letter <= 'Z')
Letter += Down;
Word += Letter;
} else if (Word != "") {
TREE.add(Word);
Word = "";
}
}
file.close();
return TREE;
}
}
