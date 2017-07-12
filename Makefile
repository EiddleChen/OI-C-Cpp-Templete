run:
	@g++ -g -o bin/main src/main.cpp
	./bin/main data/in data/out

test:
	@g++ -g -o bin/main src/main.cpp
	@g++ -g -o bin/test src/test.cpp
	@./bin/test ./data/test
	./bin/main data/test data/out

debug:
	@g++ -g -o bin/main src/main.cpp
	nemiver ./bin/main data/in data/out
