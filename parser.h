//
// Created by Salih Nascimento on 16/01/2021.
//

#ifndef INC_3DENGINE_PARSER_H
#define INC_3DENGINE_PARSER_H

#include <vector>
#include <string>
#include "geometry.h"
#include "tgaimage.h"

class Parser {
private:
    std::vector<vec3> verts_;     // array of vertices

public:
    Parser(const std::string& filename);
    int nverts() const;
    vec3 vert(int i) const;
};

#endif //INC_3DENGINE_PARSER_H
