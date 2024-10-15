#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    public:
        Brain();
        ~Brain();
        Brain(const Brain &brain);
        Brain &operator=(const Brain &rhs);
        std::string getIdea(int index);
        void setIdea(std::string idea, int index);
    private:
        std::string _ideas[100];
} ;

#endif