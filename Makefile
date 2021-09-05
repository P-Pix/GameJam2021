FILE	=	Game.obj\

INCLUDE	=	src/main.cpp\
			\
			src/Window/Constructor.cpp\

VERSION	=	-std=c++2a\

cpp:
	@(g++ -o $(FILE) $(INCLUDE) $(VERSION))

run:
	@(./$(FILE))