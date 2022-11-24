cc = gcc
FLAG =-Wall -g

all:loops recursives recursived loopd mains maindloop maindrec
#create static lib
loops:libclassloops.a
#create static lib
recursives:libclassrec.a
#create dynamic lib
recursived:libclassrec.so
#create dynamic lib
loopd:libclassloops.so 

#static 
mains:main.o libclassrec.a
		$(cc) $(FLAG) -o mains main.o  libclassrec.a -lm
#dynamic
maindloop:main.o 
	$(cc) $(FLAGS) -o maindloop main.o ./libclassloops.so -lm
#dynamic
maindrec:main.o
	$(cc) $(FLAGS) -o maindrec main.o ./libclassrec.so  -lm


libclassrec.a:basicClassification.o advancedClassificationRecursion.o
	ar -rcs libclassrec.a basicClassification.o advancedClassificationRecursion.o

libclassloops.a:basicClassification.o advancedClassificationLoop.o 
	ar -rcs libclassloops.a basicClassification.o advancedClassificationLoop.o

libclassrec.so:basicClassification.o advancedClassificationRecursion.o
	$(cc) $(FLAGS) -shared -o libclassrec.so basicClassification.o advancedClassificationRecursion.o

libclassloops.so:basicClassification.o advancedClassificationLoop.o NumClass.h
	$(cc) $(FLAGS) -shared -o libclassloops.so basicClassification.o advancedClassificationLoop.o

basicClassification.o:basicClassification.c NumClass.h
	$(cc) $(FLAG) -c basicClassification.c

advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	$(cc) $(FLAG) -c advancedClassificationRecursion.c

advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	$(cc) $(FLAG) -c advancedClassificationLoop.c


main.o:	main.c  NumClass.h
	$(cc) $(FLAG) -c  main.c

#.PHONY means that clean is not a file. just to excute the order	
.PHONY: clean
clean:
	rm -f *.o *.a *.so mains maindloop maindrec




		
	
