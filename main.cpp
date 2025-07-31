#include <cstdio>
using namespace std;

// 動物クラス
class Animal {
public:
    virtual void sound() const = 0;  
};

// 犬クラス
class Dog : public Animal {
public:
    void sound() const override {
        printf("イヌ鳴き声：ワン\n");
    }
};

// 猫クラス
class Cat : public Animal {
public:
    void sound() const override {
        printf("ネコ鳴き声:ニャー\n");
    }
};

int main() {
    // 犬クラスのインスタンス
    Animal* animal1 = new Dog();  

    // 猫クラスのインスタンス
    Animal* animal2 = new Cat();  

    animal1->sound();
    animal2->sound();

    delete animal1;
    delete animal2;

    return 0;
}
