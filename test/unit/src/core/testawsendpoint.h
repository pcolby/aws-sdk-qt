// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include <QTest>
#include "core/qtawsglobal.h"

class TestAwsEndpoint : public QObject {
    Q_OBJECT

private slots:
#ifdef QTAWS_ENABLE_PRIVATE_TESTS
    void init();
#endif

    void construct_QByteArray_data();
    void construct_QByteArray();

    void construct_QString_data();
    void construct_QString();

    void getEndpoint_data();
    void getEndpoint();

    void isSupported_data();
    void isSupported();

    void isSupported_static_data();
    void isSupported_static();

    // The isValid function is already extensively tested
    // by the two construct_* test functions above.
    //void isValid();

    void fullServiceName_data();
    void fullServiceName();

    // The following function are already extensively tested
    // by the two construct_* test functions above.
    //void hostName();
    //void regionName();
    //void serviceName();

    void supportedRegions_data();
    void supportedRegions();

    void supportedServices_data();
    void supportedServices();

    // AwsEndpointPrivate functions.
#ifdef QTAWS_ENABLE_PRIVATE_TESTS
    void loadEndpointData_QString();
    void loadEndpointData_QIODevice();
    void loadEndpointData_QXmlStreamReader();
    void parseRegion();
    void parseRegions();
    void parseService();
    void parseServices();
#endif
};
