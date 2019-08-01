#--------------------------------------------------------
# The CMakeLists.txt for:                       pCompass
# Author(s):                              Akash M
#--------------------------------------------------------

SET(SRC
  Compass.cpp
  Compass_Info.cpp
  main.cpp
)

ADD_EXECUTABLE(pCompass ${SRC})

TARGET_LINK_LIBRARIES(pCompass
   ${MOOS_LIBRARIES}
   mbutil
   m
   pthread)

