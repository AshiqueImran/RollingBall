#!/bin/bash

unamestr=`uname`

# OPTS = -I"./irrKlang/include" -L"/usr/lib" .irrKlang/bin/linux-gcc-64/libIrrKlang.so -pthread


if [ -e a.out ]
then
  rm a.out
fi

if [[ "$unamestr" == "Darwin" ]]; then
  g++ -framework OpenGL -framework GLUT -I"./irrKlang/include" -L"/usr/lib" .irrKlang/bin/linux-gcc-64/libIrrKlang.so -pthread $1
elif [[ "$unamestr" == "Linux" ]]; then
  g++ $1 -lglut -lGLU -lGL -I"./irrKlang/include" -L"/usr/lib" ./irrKlang/bin/linux-gcc-64/libIrrKlang.so -pthread
fi

./a.out
