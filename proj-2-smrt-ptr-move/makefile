output: move-as-one-struct.o move-element-by-element.o
		g++ move-as-one-struct.o move-element-by-element.o -o output

move-element-by-element.o: move-element-by-element.cpp 
		g++ -c move-element-by-element.cpp 

move-as-one-struct.o: move-as-one-struct.cpp 
		g++ -c move-as-one-struct.cpp

clean:
		rm *.o output