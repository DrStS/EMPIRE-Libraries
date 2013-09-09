#------------------------------------------------------------------------------------#
ExternalProject_Add(flann
	SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/flann-1.7.1-src
	BINARY_DIR ${CMAKE_CURRENT_SOURCE_DIR}/flann-1.7.1-src/build
	INSTALL_DIR ${CMAKE_CURRENT_SOURCE_DIR}/flann-1.7.1-src/lib
	CONFIGURE_COMMAND cmake -D BUILD_C_BINDINGS=OFF -D CMAKE_INSTALL_PREFIX=${CMAKE_CURRENT_SOURCE_DIR}/lib ..
	BUILD_COMMAND $(MAKE)
	INSTALL_COMMAND cp ${CMAKE_CURRENT_SOURCE_DIR}/flann-1.7.1-src/build/lib/libflann_cpp_s.a ${CMAKE_CURRENT_SOURCE_DIR}/lib/libflann_cpp_s.a
)
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
IF (${USE_INTEL_COMPILERS_AND_MKL})
	SET (CMAKE_C_COMPILER "icc")
	SET (CMAKE_CXX_COMPILER "icpc")
ENDIF()
#------------------------------------------------------------------------------------#
ExternalProject_Get_Property(flann SOURCE_DIR)
MACRO_APPEND_GLOBAL_VARIABLE(EMPIRE_thirdparty_INCLUDES "${SOURCE_DIR}/src/cpp")
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
SET (CMAKE_C_FLAGS "-fPIC")
SET (CMAKE_CXX_FLAGS "-fPIC")
#------------------------------------------------------------------------------------#
add_library(EMPIRE_thirdparty OBJECT ${EMPIRE_thirdparty_SOURCES})
#------------------------------------------------------------------------------------#
# Add dependencies to targets
add_dependencies(EMPIRE_thirdparty flann)
#------------------------------------------------------------------------------------#
#MESSAGE("C Compiler Flags for EMPIRE_thirdparty are:\t${CMAKE_C_FLAGS} \nC++ Compiler Flags for EMPIRE_thirdparty are:\t${CMAKE_CXX_FLAGS}")
#MESSAGE("EMPIRE_thirdparty_INCLUDES: ${EMPIRE_thirdparty_INCLUDES}")
#MESSAGE("EMPIRE_thirdparty_SOURCES: ${EMPIRE_thirdparty_SOURCES}")
