#include<iostream>

using namespace std;

class CFood {
    public:
        CFood() {}
        CFood(const CFood& _rhs) {}
        ~CFood() {}
};

class CFood_Fried : public CFood {
    public:
        CFood_Fried() {}
        CFood_Fried(const CFood_Fried& _rhs) {}
        ~CFood_Fried() {}
};

class CFood_Noodles : public CFood {
    public:
        CFood_Noodles() {}
        CFood_Noodles(const CFood_Noodles& _rhs) {}
        ~CFood_Noodles() {}
};



int main() {

}