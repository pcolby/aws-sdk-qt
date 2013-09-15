#include <QtTest/QtTest>
#include "../../src/core/qtawsglobal.h"

class TestAwsEndpoint : public QObject {
    Q_OBJECT

private slots:
    void init();

    void construct_QByteArray_data();
    void construct_QByteArray();

    void construct_QString_data();
    void construct_QString();

    void getEndpoint_data();
    void getEndpoint();

    void isSupported_data();
    void isSupported();

    void isValid_data();
    void isValid();

    void hostName_data();
    void hostName();

    void regionName_data();
    void regionName();

    void serviceName_data();
    void serviceName();

    void supportedRegions_data();
    void supportedRegions();

    void supportedServices_data();
    void supportedServices();

    // AwsEndpointPrivate functions.
    void loadEndpointData();
    void parseRegion();
    void parseRegions();
    void parseService();
    void parseServices();

};
