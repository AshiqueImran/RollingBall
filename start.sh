#!/bin/bash

unamestr=`uname`

if [[ "$unamestr" == "Darwin" ]]; then
  g++ -framework OpenGL -framework GLUT $1
elif [[ "$unamestr" == "Linux" ]]; then
  g++ $1 -lglut -lGLU -lGL
fi

./a.out
