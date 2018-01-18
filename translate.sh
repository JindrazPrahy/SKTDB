#!/bin/bash
python3 translator.py <DB.c >nothing.c
python3 translator.py <nothing.c >nothing2.c
python3 translator.py <nothing2.c >DBWIN.c
rm nothing*
 

