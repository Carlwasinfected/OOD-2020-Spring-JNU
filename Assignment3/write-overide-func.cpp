#include  <iostream>
#include  <iomanip>
using  namespace  std;

struct  complex
{
        double  r;
        double  i;
};

// @override for complex a + complex b
complex add(const complex &a, const complex &b) {
    complex res;
    res.r = a.r + b.r;
    res.i = a.i + b.i;
    return res;
}

// @override for complex a + double num
complex add(const complex &a, const double &n) {
    complex res;
    res.r = a.r + n;
    res.i = a.i;
    return res;
}

// @override for double num  + complex b
complex add(const double &n, const complex &b) {
    complex res;
    res.r = b.r + n;
    res.i = b.i;
    return res;
}

int  main()
{
        double  num;
        complex  a,  b,  c;
        cin  >>  a.r  >>  a.i;
        cin  >>  b.r  >>  b.i;
        cin  >>  num;
        c  =  add(a,  b);
        cout  <<  c.r  <<  "+"  <<  c.i  <<  "i"  <<  endl;
        c  =  add(a,  num);
        cout  <<  c.r  <<  "+"  <<  c.i  <<  "i"  <<  endl;
        c  =  add(num,  b);
        cout  <<  c.r  <<  "+"  <<  c.i  <<  "i"  <<  endl;
}
