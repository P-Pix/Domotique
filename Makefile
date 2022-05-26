#/bin/bash

PACKAGE	=	`pkg-config gtkmm-3.0 --cflags --libs`\

BIN		= 	bin/Domotique\

FILE	=	src/*.cpp\
			src/graphiqueCourbe/*.cpp\

all:
	@make delete
	@make compile
	@make run

compile:
	@echo "Compiling ..."
	g++ -o $(BIN) $(FILE) $(PACKAGE)
	@echo "Compiled"

run:
	./$(BIN) && echo "Running succes" || echo "Running failled"

valgrind:
	@valgrind ./$(BIN) && echo "Running succes" || echo "Running failled"

delete:
	@echo "Deleting ..."
	rm -rf bin/*
	@echo "Deleted"
