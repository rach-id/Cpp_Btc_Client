cmake_minimum_required(VERSION 3.9)
project(psychic-garbanzo)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/libs/gmp")
find_package(GMP REQUIRED)


add_executable(psychic-garbanzo main.cpp
        src/functions.cpp
        test/functionsTest.cpp test/Sha256Test.cpp
        include/functions.h include/includes.h include/typedefs.h
        src/playground/playground.h src/playground/playground.cpp
        libs/sha256/SHA256.cpp libs/sha256/SHA256.h )

target_link_libraries(psychic-garbanzo gmp gmpxx)



#set(Boost_USE_STATIC_LIBS OFF) #enable dynamic linking

# search for unit_test_framework
#find_package(Boost REQUIRED COMPONENTS multiprecision)

#include_directories(${Boost_INCLUDE_DIR})

# link Boost libraries to the new target
#target_link_libraries(cmake_testapp_boost ${Boost_LIBRARIES})

# link Boost with code library
#target_link_libraries(cmake_testapp_boost test_library)
# add_library(cryptopp SHARED IMPORTED)
# set_target_properties(cryptopp PROPERTIES IMPORTED_LOCATION "libs/cryptopp820/libcryptopp.a")
# include_directories("libs/cryptopp820")

# find_package(CryptoPP REQUIRED)
# target_link_libraries(YOUR_TARGET_NAME cryptopp-shared)


#find_package(Git REQUIRED)

#if (NOT EXISTS "${CMAKE_SOURCE_DIR}/libs/cryptopp")
#    execute_process(
#            COMMAND "${GIT_EXECUTABLE}" clone https://github.com/weidai11/cryptopp.git
#            WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}/libs"
#    )
#endif()
#
#set(CMAKE_SKIP_INSTALL_RULES TRUE)
#add_subdirectory(libs/cryptopp)
#target_link_libraries(psychic-garbanzo  cryptopp-static)
