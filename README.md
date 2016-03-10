# ReGenerator
genterates regex from matches and its source material. 

## quantifiers:
  the program will start with the most expressive quantifier going to the least expressive quantifer.
  
  probably like so:
    1. {} or single special charicter.
    2. lazy match
    3. greedy.

## examples

matches:
  a
  b
  c
output:
  \w

matches:
  word1
  word2
  word3
output:
  \w{4}\d

matches:
  11/22/33
  33/22/11
  33/44/11
output:
  \d{2}\/\d{2}\/\d{2}
  
matches:
  11/22/33
  33/44/444
  333/44/55
output:
  \d{2, 3}\/\d{2}\/\d{2, 3}

etc...
