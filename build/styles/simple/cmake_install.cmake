# Install script for directory: /home/pi/Proyecto/epos/iotpos/styles/simple

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/kde4/apps/iotpos/styles/simple/backg.png;/usr/share/kde4/apps/iotpos/styles/simple/loginBackground.png;/usr/share/kde4/apps/iotpos/styles/simple/pricechecker.png;/usr/share/kde4/apps/iotpos/styles/simple/priceCheckerBack.png;/usr/share/kde4/apps/iotpos/styles/simple/passwordBackground.png;/usr/share/kde4/apps/iotpos/styles/simple/dialog.png;/usr/share/kde4/apps/iotpos/styles/simple/simple.qss")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/share/kde4/apps/iotpos/styles/simple" TYPE FILE FILES
    "/home/pi/Proyecto/epos/iotpos/styles/simple/backg.png"
    "/home/pi/Proyecto/epos/iotpos/styles/simple/loginBackground.png"
    "/home/pi/Proyecto/epos/iotpos/styles/simple/pricechecker.png"
    "/home/pi/Proyecto/epos/iotpos/styles/simple/priceCheckerBack.png"
    "/home/pi/Proyecto/epos/iotpos/styles/simple/passwordBackground.png"
    "/home/pi/Proyecto/epos/iotpos/styles/simple/dialog.png"
    "/home/pi/Proyecto/epos/iotpos/styles/simple/simple.qss"
    )
endif()
