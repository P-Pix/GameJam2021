FILE	=	Game.obj\

INCLUDE	=	src/main.cpp\
			\
			src/Window/Constructor.cpp\
			src/Window/Control.cpp\
			src/Window/Draw.cpp\
			src/Window/Open.cpp\
			src/Window/Rendered.cpp\

LIB		=	-lSDL2main\
			-lSDL2\

VERSION	=	-std=c++2a\

cpp:
	@(g++ -o $(FILE) $(INCLUDE) $(LIB) $(VERSION))

run:
	@(./$(FILE))