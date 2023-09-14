SDLFLAGS=`sdl2-config --cflags --libs`
all:
	clear
	g++ main.cpp -o app.out $(SDLFLAGS)
	./app.out