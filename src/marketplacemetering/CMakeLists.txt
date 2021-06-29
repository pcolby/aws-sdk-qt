add_compile_definitions(QTAWSMARKETPLACEMETERING_LIBRARY)

add_library(QtAwsMarketplaceMetering
  batchmeterusagerequest.h
  batchmeterusagerequest_p.h
  batchmeterusageresponse.h
  batchmeterusageresponse_p.h
  marketplacemeteringclient.h
  marketplacemeteringclient_p.h
  marketplacemeteringrequest.h
  marketplacemeteringrequest_p.h
  marketplacemeteringresponse.h
  marketplacemeteringresponse_p.h
  meterusagerequest.h
  meterusagerequest_p.h
  meterusageresponse.h
  meterusageresponse_p.h
  qtawsmarketplacemeteringglobal.h
  registerusagerequest.h
  registerusagerequest_p.h
  registerusageresponse.h
  registerusageresponse_p.h
  resolvecustomerrequest.h
  resolvecustomerrequest_p.h
  resolvecustomerresponse.h
  resolvecustomerresponse_p.h
  batchmeterusagerequest.cpp
  batchmeterusageresponse.cpp
  marketplacemeteringclient.cpp
  marketplacemeteringrequest.cpp
  marketplacemeteringresponse.cpp
  meterusagerequest.cpp
  meterusageresponse.cpp
  registerusagerequest.cpp
  registerusageresponse.cpp
  resolvecustomerrequest.cpp
  resolvecustomerresponse.cpp)

target_link_libraries(QtAwsMarketplaceMetering
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
