// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include <QTest>
#include "core/awsregion.h"
#include "core/qtawsglobal.h"

#include <QMap>

class TestAwsRegion : public QObject {
    Q_OBJECT

private:
    typedef QMap<QString, AwsRegion::Region> RegionNameToEnumMap;
    static RegionNameToEnumMap regionNameToEnum();

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
