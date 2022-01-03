#!/bin/bash

find . -type f -name "*.sh" -execdir echo {} ';' | sed -e 's/\.sh$//'
