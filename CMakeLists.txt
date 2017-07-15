cmake_minimum_required(VERSION 2.4.6)

if(COMMAND cmake_policy)
      cmake_policy(SET CMP0003 NEW)
    endif(COMMAND cmake_policy)

#jp are tooooo cute

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

FIND_PACKAGE(Qt4 REQUIRED)
INCLUDE(${QT_USE_FILE})
ADD_DEFINITIONS(${QT_DEFINITIONS})

INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR})

SET(JP_HEADERS src/WidgetExample.h
               src/TutMenu.h)
				
QT4_WRAP_CPP(JP_HEADERS_MOC ${JP_HEADERS})

SET(JP_FORMS src/forms/tut.ui)
QT4_WRAP_UI(JP_FORM_HEADERS ${JP_FORMS})

ADD_EXECUTABLE(jp_cute2 src/jp_cute2.cpp 
                        src/WidgetExample.cpp
                        src/TutMenu.cpp 
                        ${JP_HEADERS_MOC} 
                        ${JP_FORM_HEADERS})

TARGET_LINK_LIBRARIES(jp_cute2  ${QT_LIBRARIES})
