//
// Created by himan on 10-07-2025.
//

#ifndef GENERICRUBIKSCUBE_H
#define GENERICRUBIKSCUBE_H

#include <bits/stdc++.h>
using namespace std;

class RubiksCube {
    public:
    enum class FACES {
        UP, LEFT, FRONT, RIGHT, BACK, DOWN
    };

    enum class COLORS {
        WHITE, GREEN, RED, BLUE, ORANGE, YELLOW
    };

    enum class MOVES {
        L, L2, LPRIME,
        R, R2, RPRIME,
        U, U2, UPRIME,
        D, D2, DPRIME,
        F, F2, FPRIME,
        B, B2, BPRIME
    };

    /*      RUBIKS CUBE LAYOUT
     *
     *        U
     *      L F R B
     *        D
     *
     *           W W W
     *           W W W
     *           W W W
     *
     *   G G G   R R R   B B B   O O O
     *   G G G   R R R   B B B   O O O
     *   G G G   R R R   B B B   O O O
     *
     *           Y Y Y
     *           Y Y Y
     *           Y Y Y
     */

    virtual COLORS getColor(FACES face, int row, int col ) = 0;

    static char getColorLetter(COLORS color);

    static string getMove(MOVES mv);

    virtual bool isSolved() const = 0;

    void print() const;

    vector<MOVES> randomMoves(int times);

    RubiksCube &move(MOVES mv);

    RubiksCube &invert(MOVES mv);

    virtual RubiksCube &f() = 0;
    virtual RubiksCube &fPrime() = 0;
    virtual RubiksCube &f2() = 0;
    virtual RubiksCube &u() = 0;
    virtual RubiksCube &uPrime() = 0;
    virtual RubiksCube &u2() = 0;
    virtual RubiksCube &l() = 0;
    virtual RubiksCube &lPrime() = 0;
    virtual RubiksCube &l2() = 0;
    virtual RubiksCube &r() = 0;
    virtual RubiksCube &d() = 0;
    virtual RubiksCube &dPrime() = 0;
    virtual RubiksCube &d2() = 0;
    virtual RubiksCube &rPrime() = 0;
    virtual RubiksCube &r2() = 0;
    virtual RubiksCube &b() = 0;
    virtual RubiksCube &bPrime() = 0;
    virtual RubiksCube &b2() = 0;

    string getCornerColorString(uint8_t ind) const;

    uint8_t getCornerIndex(uint8_t ind) const;

    uint8_t getCornerOrientation(uint8_t ind) const;
};



#endif //GENERICRUBIKSCUBE_H
