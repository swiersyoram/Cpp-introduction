//
// Created by yoram on 5/08/2023.
//

#ifndef TEMPLATES_ACCUM_H
#define TEMPLATES_ACCUM_H

#endif //TEMPLATES_ACCUM_H

template <class T>
class Accum {

private:
    T total;
public:
    Accum(T start):total(start){}

    T operator += (T const& t){ return total + t;};
    T GetTotal() const {return total;};
};
