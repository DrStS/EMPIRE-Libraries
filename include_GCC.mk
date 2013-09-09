CC  = g++
CXX = gcc
FC  = gfortran
LINKER = $(CXX)

CFLAGS    = -O3 -std=c99 -fPIC
CXXFLAGS  = -O3 -fPIC
FCFLAGS   = 
LFLAGS    = 
DEFINES   = -D "TIXML_USE_TICPP" -D "NDEBUG"

# All Includes
INCLUDES += -I $(SRC_DIR_MAIN)/ticpp
INCLUDES += -I $(SRC_DIR_MAIN)/ann_1.1.2

