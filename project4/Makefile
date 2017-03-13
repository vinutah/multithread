
#-------------------------------------------------------------
CC      = /usr/bin/gcc
#-------------------------------------------------------------
OPT     = -O2
#-------------------------------------------------------------
PTHREAD = -pthread
MSGLEN  = -fmessage-length=0
PEDERR  = -pedantic-errors
STD     = -std=gnu99
#-------------------------------------------------------------
WERRR   = -Werror
WALL1   = -Wall -Wextra -Wwrite-strings -Winit-self 
WALL2   = -Wcast-align -Wcast-qual -Wpointer-arith
WALL3   = -Wstrict-aliasing -Wformat=2 -Wmissing-include-dirs
WALL4   = -Wno-unused-parameter -Wshadow -Wuninitialized
WALL5   = -Wold-style-definition
WALL    = $(WALL1) $(WALL2) $(WALL3) $(WALL4) $(WALL5)
#-------------------------------------------------------------

C_SRC_1 = problem_1.c 
C_SRC_2 = problem_2.c
C_SRC_3 = problem_3.c
C_SRC   = $(C_SRC_1) $(C_SRC_2) $(C_SRC_3) 
#-------------------------------------------------------------

C_OBJ_1 = problem_1 
C_OBJ_2 = problem_2
C_OBJ_3 = problem_3
C_OBJ  = $(C_OBJ_1) $(C_OBJ_2) $(C_OBJ_3)
#-------------------------------------------------------------

CCFLAGS= $(PTHREAD) $(OPT) $(MSGLEN) $(PEDERR) $(STD) $(WERRR) $(WALL)

#-------------------------------------------------------------
all: compile

compile:
	$(CC) $(CCFLAGS) $(C_SRC_1) -o $(C_OBJ_1)
	#$(CC) $(CCFLAGS) $(C_SRC_2) -o $(C_OBJ_2)
	#$(CC) $(CCFLAGS) $(C_SRC_3) -o $(C_OBJ_3)

clean:
	rm -rf $(C_OBJ)
#-------------------------------------------------------------
