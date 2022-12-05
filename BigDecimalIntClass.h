#ifndef BIGDECIMALINT_BIGDECIMALINTCLASS_H
#define BIGDECIMALINT_BIGDECIMALINTCLASS_H

#include <iostream>
#include <deque>
#include <regex>

using namespace std;

class BigDecimalInt{
private:
    string number;
    char sign;
    void setNumber(string num);
    bool checkValidInput(string input);

public:
    bool operator < (const BigDecimalInt& anotherDec);
    bool operator > (const BigDecimalInt& anotherDec);
    bool operator == (const BigDecimalInt anotherDec);
    BigDecimalInt& operator = (BigDecimalInt &anotherDec);
    BigDecimalInt operator + (BigDecimalInt number2);
    BigDecimalInt operator - (BigDecimalInt anotherDec);
    friend ostream &operator << (ostream &out, BigDecimalInt num);
    int size();
    int Sign();

    BigDecimalInt(){}
    BigDecimalInt(string num)
    {
        setNumber(num);
    }
};

#endif //BIGDECIMALINT_BIGDECIMALINTCLASS_H
