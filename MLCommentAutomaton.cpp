#include "MLCommentAutomaton.h"
#include <iostream>

void MLCommentAutomaton::S0(const std::string& input) {
    if (input[index] == '#') {
        inputRead++;
        index++;
        S1(input);
    }
    else {
        Serr();
    }
}

void MLCommentAutomaton::S1(const std::string& input) {
    if (input[index] == '|') {
        inputRead++;
        index++;
        S2(input);
    }
    else {
        Serr();
    }
}

void MLCommentAutomaton::S2(const std::string& input) {
    if (index >= input.size()) {
        Serr();
    }
    else if (input[index] != '|') {
        inputRead++;
        index++;
        S2(input);
    }
    else if (input[index] == '|') {
        inputRead++;
        index++;
        S3(input);
    }
}

void MLCommentAutomaton::S3(const std::string& input) {
    if (index >= input.size()) {
        Serr();
    }
    else if (input[index] != '#') {
        inputRead++;
        index++;
        S2(input);
    }
    else if (input[index] == '#') {
        inputRead++;
        index++;
    }
}


