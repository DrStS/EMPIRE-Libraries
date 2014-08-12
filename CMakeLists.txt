#------------------------------------------------------------------------------------#
IF (CMAKE_SYSTEM_NAME MATCHES "Linux")
ExternalProject_Add(flann
	SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/flann-1.7.1-src
	BINARY_DIR ${CMAKE_CURRENT_SOURCE_DIR}/flann-1.7.1-src/build
	INSTALL_DIR ${CMAKE_CURRENT_SOURCE_DIR}/flann-1.7.1-src/lib
	CONFIGURE_COMMAND cmake -D BUILD_C_BINDINGS=OFF -D CMAKE_INSTALL_PREFIX=${CMAKE_CURRENT_SOURCE_DIR}/lib ..
	BUILD_COMMAND $(MAKE)
	INSTALL_COMMAND cp ${CMAKE_CURRENT_SOURCE_DIR}/flann-1.7.1-src/build/lib/libflann_cpp_s.a ${CMAKE_CURRENT_SOURCE_DIR}/lib/libflann_cpp_s.a
)
ExternalProject_Add(nlopt
        SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/nlopt-2.4.1
        BINARY_DIR ${CMAKE_CURRENT_SOURCE_DIR}/nlopt-2.4.1/build
        INSTALL_DIR ${CMAKE_CURRENT_SOURCE_DIR}/lib
        CONFIGURE_COMMAND cmake -D BUILD_C_BINDINGS=OFF -D CMAKE_INSTALL_PREFIX=${CMAKE_CURRENT_SOURCE_DIR}/lib ..
        BUILD_COMMAND $(MAKE)
        INSTALL_COMMAND cp ${CMAKE_CURRENT_SOURCE_DIR}/nlopt-2.4.1/build/libnlopt.a ${CMAKE_CURRENT_SOURCE_DIR}/lib/libnlopt.a
)
# ExternalProject_Add(nlopt
#         SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/nlopt-2.4.1
#         BINARY_DIR ${CMAKE_CURRENT_SOURCE_DIR}/nlopt-2.4.1/build
#         INSTALL_DIR ${CMAKE_CURRENT_SOURCE_DIR}/nlopt-2.4.1/lib
#         CONFIGURE_COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/nlopt-2.4.1/configure --prefix=${CMAKE_CURRENT_SOURCE_DIR}/nlopt-2.4.1
#         BUILD_COMMAND make
#         INSTALL_COMMAND make install
# )
ENDIF()

SET(ENV{TEST} ${CMAKE_CURRENT_SOURCE_DIR})

IF (CMAKE_SYSTEM_NAME MATCHES "Windows")
ExternalProject_Add(flann
	SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/flann-1.7.1-src
	BINARY_DIR ${CMAKE_CURRENT_SOURCE_DIR}/flann-1.7.1-src/build
	INSTALL_DIR ${CMAKE_CURRENT_SOURCE_DIR}/lib
	CONFIGURE_COMMAND cmake -G "NMake Makefiles" -D BUILD_C_BINDINGS=OFF -D CMAKE_INSTALL_PREFIX=${CMAKE_CURRENT_SOURCE_DIR}/lib ..
    BUILD_COMMAND nmake
    INSTALL_COMMAND cd ${CMAKE_CURRENT_SOURCE_DIR}/flann-1.7.1-src/build/lib/ && copy flann_cpp_s.lib ..\\..\\..\\lib
)
# TODO DEBUG ? COMPILATION FOR WINDOWS OF NLOPT
ExternalProject_Add(nlopt
        SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/nlopt-2.4.1
        BINARY_DIR ${CMAKE_CURRENT_SOURCE_DIR}/nlopt-2.4.1/build
        INSTALL_DIR ${CMAKE_CURRENT_SOURCE_DIR}/lib
        CONFIGURE_COMMAND cmake -G "NMake Makefiles" -D BUILD_C_BINDINGS=OFF -D CMAKE_INSTALL_PREFIX=${CMAKE_CURRENT_SOURCE_DIR}/lib ..
        BUILD_COMMAND $(MAKE)
        INSTALL_COMMAND cp ${CMAKE_CURRENT_SOURCE_DIR}/nlopt-2.4.1/build/ ${CMAKE_CURRENT_SOURCE_DIR}/lib/libnlopt.a && copy nlopt.lib ..\\..\\lib
)
ENDIF()


#------------------------------------------------------------------------------------#
FILE(GLOB EMPIRE_API_SOURCES_src_subdirectories "*")
FOREACH(f ${EMPIRE_API_SOURCES_src_subdirectories})
  IF(NOT f MATCHES "\\.txt" AND IS_DIRECTORY ${f} )
   # add_subdirectory(${f})
  ENDIF()
ENDFOREACH()
add_subdirectory(ticpp) # TODO
add_subdirectory(cppunit)
add_subdirectory(dataCreator)
#------------------------------------------------------------------------------------#
IF (${USE_INTEL_COMPILERS_MKL_IMPI_LINUX})
  SET (CMAKE_C_COMPILER "icc")
  SET (CMAKE_CXX_COMPILER "icpc")
ENDIF()
#------------------------------------------------------------------------------------#
ExternalProject_Get_Property(flann SOURCE_DIR)
MACRO_APPEND_GLOBAL_VARIABLE(EMPIRE_thirdparty_INCLUDES "${SOURCE_DIR}/src/cpp")
ExternalProject_Get_Property(nlopt SOURCE_DIR)
MACRO_APPEND_GLOBAL_VARIABLE(EMPIRE_thirdparty_INCLUDES "${SOURCE_DIR}/api")
# MACRO_APPEND_GLOBAL_VARIABLE(EMPIRE_thirdparty_INCLUDES "${SOURCE_DIR}/include")
#------------------------------------------------------------------------------------#
get_property(EMPIRE_thirdparty_INCLUDES GLOBAL PROPERTY EMPIRE_thirdparty_INCLUDES) 
get_property(EMPIRE_thirdparty_SOURCES GLOBAL PROPERTY EMPIRE_thirdparty_SOURCES) 
#------------------------------------------------------------------------------------#
include_directories(${EMPIRE_thirdparty_INCLUDES})
#------------------------------------------------------------------------------------#
# Compiler flags & defines EMPIRE_thirdparty
add_definitions(-DTIXML_USE_TICPP)
add_definitions(-DNDEBUG)
#------------------------------------------------------------------------------------#
# Needed because Cmake does add it automatically only for shared libraries
# Cmake considers static libs as archives and not as a library
IF (CMAKE_SYSTEM_NAME MATCHES "Linux")
  SET (CMAKE_C_FLAGS "-fPIC")
  SET (CMAKE_CXX_FLAGS "-fPIC")
ENDIF()
IF (CMAKE_SYSTEM_NAME MATCHES "Windows")
  SET (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} /EHsc")
  SET (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /EHsc")
ENDIF()
#------------------------------------------------------------------------------------#
add_library(EMPIRE_thirdparty OBJECT ${EMPIRE_thirdparty_SOURCES})
#------------------------------------------------------------------------------------#
# Add dependencies to targets
add_dependencies(EMPIRE_thirdparty flann)
add_dependencies(EMPIRE_thirdparty nlopt)
#------------------------------------------------------------------------------------#
#MESSAGE("C Compiler Flags for EMPIRE_thirdparty are:\t${CMAKE_C_FLAGS} \nC++ Compiler Flags for EMPIRE_thirdparty are:\t${CMAKE_CXX_FLAGS}")
#MESSAGE("EMPIRE_thirdparty_INCLUDES: ${EMPIRE_thirdparty_INCLUDES}")
#MESSAGE("EMPIRE_thirdparty_SOURCES: ${EMPIRE_thirdparty_SOURCES}")
