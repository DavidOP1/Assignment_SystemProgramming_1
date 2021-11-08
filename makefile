CC=gcc
AR=ar 
OBJECTS_MAIN=main.o 
FLAGS= -Wall -g 
HEADER_LIB=NumClass.h
#recursives
all: mains maindloop maindrec loopd recursived recursives loops
loopd:libclassloops.so #as requested
recursived:libclassrec.so#as requested
recursives:libclassrec.a#as requested
loops:libclassloops.a #as requested

mains: $(OBJECTS_MAIN) recursives
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libclassrec.a
maindloop: $(OBJECTS_MAIN) loopd
	$(CC) $(FLAGS) -o maindloop $(OBJECTS_MAIN) ./libclassloops.so
maindrec: $(OBJECTS_MAIN) recursived
	$(CC) $(FLAGS) -o maindrec $(OBJECTS_MAIN) ./libclassrec.so

advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h 
	$(CC) $(FLAGS) -c advancedClassificationLoop.c 

basicClassification.o: basicClassification.c NumClass.h 
	$(CC) $(FLAGS) -c basicClassification.c

advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h 
	$(CC) $(FLAGS)  -c advancedClassificationRecursion.c



loops : advancedClassificationLoop.o basicClassification.o
	$(AR) -rcs libclassloops.a advancedClassificationLoop.o basicClassification.o

recursives: advancedClassificationRecursion.o basicClassification.o
	$(AR) -rcs libclassrec.a advancedClassificationRecursion.o basicClassification.o

recursived: advancedClassificationRecursion.o basicClassification.o
	$(CC) -shared -o libclassrec.so advancedClassificationRecursion.o basicClassification.o

loopd : advancedClassificationLoop.o basicClassification.o
	$(CC) -shared -o libclassloops.so advancedClassificationLoop.o basicClassification.o

main.o: main.c NumClass.h 
	$(CC) $(FLAGS) -c main.c

.PHONY: clean all

clean: 
	rm -f *.o *.a *.so mains maindloop maindrec

