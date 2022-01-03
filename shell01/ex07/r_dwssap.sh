#!/bin/sh

cat /etc/passwd | grep -v '#' | cut -f'1' -d':' | awk 'NR %2 == 0' | rev | sort -r | awk 'NR>= ENVIRON["FT_LINE1"] && NR<= ENVIRON["FT_LINE2"]' | tr '\n' '\, ' | sed 's/,/, /g' | rev | cut -c 2- | rev | sed 's/,$/\./' | tr -d '\n' 
