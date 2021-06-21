set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5 COMPONENTS Core Network REQUIRED)

add_library(QtAwsPolly
  deletelexiconrequest.h
  deletelexiconrequest_p.h
  deletelexiconresponse.h
  deletelexiconresponse_p.h
  describevoicesrequest.h
  describevoicesrequest_p.h
  describevoicesresponse.h
  describevoicesresponse_p.h
  getlexiconrequest.h
  getlexiconrequest_p.h
  getlexiconresponse.h
  getlexiconresponse_p.h
  getspeechsynthesistaskrequest.h
  getspeechsynthesistaskrequest_p.h
  getspeechsynthesistaskresponse.h
  getspeechsynthesistaskresponse_p.h
  listlexiconsrequest.h
  listlexiconsrequest_p.h
  listlexiconsresponse.h
  listlexiconsresponse_p.h
  listspeechsynthesistasksrequest.h
  listspeechsynthesistasksrequest_p.h
  listspeechsynthesistasksresponse.h
  listspeechsynthesistasksresponse_p.h
  pollyclient.h
  pollyclient_p.h
  pollyrequest.h
  pollyrequest_p.h
  pollyresponse.h
  pollyresponse_p.h
  putlexiconrequest.h
  putlexiconrequest_p.h
  putlexiconresponse.h
  putlexiconresponse_p.h
  startspeechsynthesistaskrequest.h
  startspeechsynthesistaskrequest_p.h
  startspeechsynthesistaskresponse.h
  startspeechsynthesistaskresponse_p.h
  synthesizespeechrequest.h
  synthesizespeechrequest_p.h
  synthesizespeechresponse.h
  synthesizespeechresponse_p.h
  deletelexiconrequest.cpp
  deletelexiconresponse.cpp
  describevoicesrequest.cpp
  describevoicesresponse.cpp
  getlexiconrequest.cpp
  getlexiconresponse.cpp
  getspeechsynthesistaskrequest.cpp
  getspeechsynthesistaskresponse.cpp
  listlexiconsrequest.cpp
  listlexiconsresponse.cpp
  listspeechsynthesistasksrequest.cpp
  listspeechsynthesistasksresponse.cpp
  pollyclient.cpp
  pollyrequest.cpp
  pollyresponse.cpp
  putlexiconrequest.cpp
  putlexiconresponse.cpp
  startspeechsynthesistaskrequest.cpp
  startspeechsynthesistaskresponse.cpp
  synthesizespeechrequest.cpp
  synthesizespeechresponse.cpp)

add_dependencies(QtAwsPolly QtAwsCore)

target_link_libraries(QtAwsPolly PRIVATE Qt5::Core Qt5::Network)
