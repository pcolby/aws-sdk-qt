/*
    Copyright 2013 Paul Colby

    This file is part of libqtaws.

    libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <QtTest/QtTest>
#include "../../src/core/awsregion.h"
#include "../../src/core/qtawsglobal.h"

#include <QMap>
#include <QVariantMap>

class TestAwsRegion : public QObject {
    Q_OBJECT

private:
    typedef QMap<QString, AwsRegion::Region> RegionNameToEnumMap;
    static RegionNameToEnumMap regionNameToEnum();

    static QVariantMap regionServiceHosts();
    static QVariantMap supportedServicesMap();

private slots:

    void construct_Region_data();
    void construct_Region();

    void construct_QString_data();
    void construct_QString();

    void fullName_data();
    void fullName();

    void fromName_data();
    void fromName();

    void hostName_data();
    void hostName();

    void isSupported_data();
    void isSupported();

    void name_data();
    void name();

    void supportedServices_data();
    void supportedServices();

};
