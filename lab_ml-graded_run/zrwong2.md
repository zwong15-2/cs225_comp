


## Score: 12/12 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c graph.cpp -o .objs/graph.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c NimLearner.cpp -o .objs/NimLearner.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c tests/unit_tests.cpp -o .objs/tests/unit_tests.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/graph.o .objs/NimLearner.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/unit_tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lpthread -o test

```


### ✓ - [1/1] - NimLearner(10) constructor creates a starting vertex "p1-10"

- **Points**: 1 / 1





### ✓ - [1/1] - NimLearner(3) constructor creates the correct vertices

- **Points**: 1 / 1





### ✓ - [1/1] - NimLearner(3) constructor creates the correct edges

- **Points**: 1 / 1





### ✓ - [1/1] - NimLearner(1) plays a trivial random game

- **Points**: 1 / 1





### ✓ - [1/1] - NimLearner(10) plays random game

- **Points**: 1 / 1





### ✓ - [1/1] - Path from playRandomGame of NimLearner(10) source vertex is labeled "p1-10"

- **Points**: 1 / 1





### ✓ - [1/1] - Path from playRandomGame of NimLearner(10) final vertex is labeled "p1-0" or "p2-0"

- **Points**: 1 / 1





### ✓ - [1/1] - A NimLearner(1) random path contains one edge

- **Points**: 1 / 1





### ✓ - [1/1] - NimLearner(1) updates the edge weight correctly

- **Points**: 1 / 1





### ✓ - [1/1] - NimLearner(3) learns that (p1-3\, p2-2) and (p1-3\, p2-1) are losing edges

- **Points**: 1 / 1





### ✓ - [1/1] - NimLearner(4) learns that (p1-4\, p2-3) is a better edge than (p1-4\, p2-2)

- **Points**: 1 / 1





### ✓ - [1/1] - NimLearner(4) has ending edge weights summing to the random games played

- **Points**: 1 / 1





---

This report was generated for **zrwong2** using **8a48764551dc0a6a29b6ead3e9d7567af4071484** (from **December 3rd 2018, 12:15:00 am**)
