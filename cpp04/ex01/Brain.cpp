#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        _ideas[i] = "no idea";
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &brain)
{
    std::cout << "Brain copy constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        _ideas[i] = brain._ideas[i];
}

Brain &Brain::operator=(const Brain &rhs)
{
    std::cout << "Brain copy operator called" << std::endl;
    if (this != &rhs)
    {
        for (int i = 0; i  < 100; i++)
            this->_ideas[i] = rhs._ideas[i];
    }
    return (*this);
}

std::string Brain::getIdea(int index)
{
    if (index >= 0 && index < 100)
		return _ideas[index];
	else
		return ("no idea");
}

void    Brain::setIdea(std::string idea, int index)
{
    if (index >= 0 && index < 100)
        _ideas[index] = idea;
}