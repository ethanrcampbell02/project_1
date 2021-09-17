#ifndef PROJECT_1_SLCOMMENTAUTOMATON_H
#define PROJECT_1_SLCOMMENTAUTOMATON_H


#include "Automaton.h"

class SLCommentAutomaton : public Automaton
{
private:
    void S1(const std::string& input);

public:
    SLCommentAutomaton() : Automaton(TokenType::COMMENT) {}  // Call the base constructor

    void S0(const std::string& input);
};


#endif //PROJECT_1_SLCOMMENTAUTOMATON_H
