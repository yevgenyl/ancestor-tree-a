#pragma once

#include <iostream>
using namespace std;

namespace family{
    class Tree{
        public:
        string name, relation_type;
        Tree *father, *mother;

        Tree(string root);

        Tree& addFather(string to, string name);
        Tree& addMother(string to, string name);

        void display();
        string relation(string who);
        string find(string relation);
        void remove(string name);
    };

}
