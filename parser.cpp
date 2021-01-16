//
// Created by Salih Nascimento on 16/01/2021.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include "parser.h"

Parser::Parser(const std::string& filename) : verts_() {
    std::ifstream in;
    in.open(filename, std::ifstream::in);
    if (in.fail()) return;
    std::string line;
    while (!in.eof()) {
        std::getline(in, line);
        std::istringstream iss(line);
        char trash;
        if (!line.compare(0, 2, "v ")) {
            iss >> trash;
            vec3 v;
            for (int i = 0; i < 3; i++) iss >> v[i];
            verts_.push_back(v);
        }
    }
    in.close();
//    std::cerr << "# v# " << nverts();
}

int Parser::nverts() const {
    return verts_.size();
}

vec3 Parser::vert(const int i) const {
    return verts_[i];
}

