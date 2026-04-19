#include <iostream>
using  namespace std;

float f(float x) {
    return x * (x * (x - 3) + 2) - 6;
}

float pol(float a, float b, float eps){
    
    if(f(a) == 0.0){
        return a;
    }else if(f(b) == 0.0){
        return b;
    }
    
    float s = (a + b) / 2;
    
    if((b - a) <= eps){
        return s;
    }else if((f(a) * f(s)) < 0){
        return pol(a, s, eps);
    }
    return pol(s, b, eps);
}

int main(){
    float a = -10;
    float b = 10;
    float eps = 0.00001;

    cout << "Znalezione miejsce zerowe wynosi: " << pol(a, b, eps);
}
