// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include <QVariantMap>

#ifndef AWSENDPOINT_TESTDATA_H
#define AWSENDPOINT_TESTDATA_H

class AwsEndpointTestData {

public:
    static QVariantMap fullServiceNames();
    static QVariantMap hostInfoMap();
    static QVariantMap regionServiceHosts();
    static QVariantMap supportedRegionsMap();
    static QVariantMap supportedServicesMap();

};

#endif
