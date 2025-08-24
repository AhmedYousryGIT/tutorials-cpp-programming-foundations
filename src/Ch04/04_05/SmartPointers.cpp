#include <iostream>
#include <cstdint>
#include <memory>

#include "sharedFns.h"

class Child;

struct Enemy
{
    uint16_t health;
    std::string name;
};

class Parent {
    public:
    std::shared_ptr<Child> child;
    ~Parent() {
        std::cout << "child is declared as a Shared Pointer" << std::endl;
        std::cout << "Parent destroyed" << std::endl << std::endl;
    }
};

class Child {
    public:
    //Uncommenting the line below will lead to a Circular Reference, where both the Parent owns the Child and Child owns the Parent and both destructors will not be called leading to a memory leak
    //std::shared_ptr<Parent> parent;
    
    //Weak pointer to avoid circular reference
    std::weak_ptr<Parent> parent;
    ~Child() {
        std::cout << "parent is declared as a Weak Pointer" << std::endl;
        std::cout << "Child destroyed" << std::endl << std::endl;
    }
};

int main(){
    printSpacer();
    
    //Unique Pointer
    std::cout << "Unique Pointers" << std::endl;
    std::unique_ptr<Enemy> boss = std::make_unique<Enemy>();
    boss->name = "Cartel";
    boss->health = 1500;
    
    //Uncommenting any of the lines below will give an error. Unique pointers cannot be reassigned
    //to another pointer.
    //std::unique_ptr<Enemy> anotherBoss = boss;
    //std::shared_ptr<Enemy> anotherBoss = boss;
    std::cout << "The current enemy boss is " << boss->name << ", and his health = " << boss->health << std::endl;
    printSpacer();
    
    //Shared pointers
    std::cout << "Shared Pointers" << std::endl;
    std::shared_ptr<Enemy> psycho = std::make_shared<Enemy>();
    std::shared_ptr<Enemy> meleEnemy = psycho;
    
    psycho->name = "Shivo";
    psycho->health = 100;
    
    meleEnemy->health -= 10;
    
    std::cout << psycho->name << "'s current health = "  << psycho->health << std::endl;
    printSpacer();
    
    //Weak Pointers
    std::cout << "Weak Pointers" << std::endl;
    std::shared_ptr<Parent> p = std::make_shared<Parent>();
    std::shared_ptr<Child> c = std::make_shared<Child>();

    p->child = c;
    c->parent = p;
    
    std::cout << "Notice that if both Parent.child and Child.parent were declared as Shared Pointers, that would mean that both the parent owns the child and the child owns the parent, which would result in a Circular Reference Issue. This means that the destructors of both instances will never be called and that results in a Memory Leak." << std::endl;
    std::cout << "But since Child.parent is declared as a Weak Pointer, this means that the child doesn't own the parent, it just references it, supposed that it exists. This will break the Circular Reference and both instaces should be able to call their destructor functions" << std::endl;

    //No need to delete a smart pointer to release memory
    //The compiler handles this automatically eliminating the threat of a memory leak
    return 0;
}
