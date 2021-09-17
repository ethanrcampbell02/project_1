cmake_minimum_required(VERSION 3.17)
project(project_1)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror")

include_directories(.)

add_executable(project_1
        Automaton.h
        ColonAutomaton.cpp
        ColonAutomaton.h
        ColonDashAutomaton.cpp
        ColonDashAutomaton.h
        TemplateAutomaton.cpp
        TemplateAutomaton.h
        Lexer.cpp
        Lexer.h
        main.cpp
        Token.cpp
        Token.h
        StringAutomaton.cpp
        StringAutomaton.h
        SLCommentAutomaton.cpp
        SLCommentAutomaton.h
        MLCommentAutomaton.cpp
        MLCommentAutomaton.h IdentifierAutomaton.cpp IdentifierAutomaton.h)
