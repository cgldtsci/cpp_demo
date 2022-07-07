cmake_minimum_required(VERSION 3.17)

# set the project name
project(Tutorial VERSION 1.5)

option(USE_MYMATH "Use tutorial provided math implementation" ON)

configure_file(TutorialConfig.h.in TutorialConfig.h)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
#确保在 add_executable 命令之前添加 CMAKE_CXX_STANDARD_REQUIRED 命令
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add the MathFunctions library
if(USE_MYMATH)
    add_subdirectory(MathFunctions)
    list(APPEND EXTRA_LIBS MathFunctions)
    # interface
    #    list(APPEND EXTRA_INCLUDES ${PROJECT_SOURCE_DIR}/MathFunctions)
endif()

# add the executable
add_executable(Tutorial tutorial.cpp)

target_link_libraries(${PROJECT_NAME} PUBLIC ${EXTRA_LIBS})

#Cannot specify include directories for target "Tutorial" which is not built
#by this project
# 必须有target，所以add_executable必须放在前面

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
target_include_directories(${PROJECT_NAME} PUBLIC
        ${PROJECT_BINARY_DIR}
        #        ${EXTRA_INCLUDES} # interface
        )

# 改变安装路径可以使用下面的语句，Unix: "/usr/local",
# Windows: "c:/Program Files/${PROJECT_NAME}" 为默认值，
# 所有的DESTINATION均以此目录为根目录
# 执行 make install 会生效

#set(CMAKE_INSTALL_PREFIX ${CMAKE_BINARY_DIR}/mymath)
#
#install(TARGETS ${PROJECT_NAME} DESTINATION bin)
#install(FILES "${PROJECT_BINARY_DIR}/TutorialConfig.h"
#        DESTINATION include
#        )
