//
// Created by rezap on 2/5/2023.
//
#ifndef FINAL_TEXTEDITOR_H
#define FINAL_TEXTEDITOR_H

#include <iostream>

using namespace std;
const int ll = 2;

class Rope
{
public:
    Rope();
    Rope *left, *right, *parent;
    char *str;
    int lc;
    void makerope(Rope *&node, Rope *par,char a[], int l, int r);
    void status(Rope *r);
    void concat(Rope *&root3, Rope *root1, Rope *root2, int n1);
};

#endif //FINAL_TEXTEDITOR_H
