/*
    Copyright 2013 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

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

    void isSupported_static_data();
    void isSupported_static();

    // The isValid function is already extensively tested
    // by the two construct_* test functions above.
    //void isValid();

    void fullServiceName_data();
    void fullServiceName();

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
    void loadEndpointData_QString();
    void loadEndpointData_QIODevice();
    void loadEndpointData_QXmlStreamReader();
    void parseRegion();
    void parseRegions();
    void parseService();
    void parseServices();
};
