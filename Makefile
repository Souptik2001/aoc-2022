all:
	echo "Please specify the file"

one: clean one.cpp
	g++ -pthread -o out one.cpp && ./out

clean:
	rm -rf *o out