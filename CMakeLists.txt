cmake_minimum_required(VERSION 2.4.6)

if(COMMAND cmake_policy)
      cmake_policy(SET CMP0003 NEW)
    endif(COMMAND cmake_policy)

#jp are tooooo cute

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

FIND_PACKAGE(Qt4 REQUIRED)
INCLUDE(${QT_USE_FILE})
ADD_DEFINITIONS(${QT_DEFINITIONS})

SET(JP_HEADERS src/WidgetExample.h)
				
QT4_WRAP_CPP(JP_HEADERS_MOC ${JP_HEADERS})

#SET(ICP_SETUP_FORMS icp_setup_widget/src/icp_menu.ui)
#QT4_WRAP_UI(ICP_SETUP_FORM_HEADERS ${ICP_SETUP_FORMS})

ADD_EXECUTABLE(jp_cute2 src/jp_cute2.cpp src/WidgetExample.cpp ${JP_HEADERS_MOC})

TARGET_LINK_LIBRARIES(jp_cute2  ${QT_LIBRARIES})
