/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
