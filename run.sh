#!/bin/bash

lv_i18n compile -l en-GB -t '*.yml' -o .
lv_i18n extract -s test.c -t '*.yml'
