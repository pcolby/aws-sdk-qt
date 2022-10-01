// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTANALYTICSCLIENT_P_H
#define QTAWS_IOTANALYTICSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace IoTAnalytics {

class IoTAnalyticsClient;

class IoTAnalyticsClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit IoTAnalyticsClientPrivate(IoTAnalyticsClient * const q);

private:
    Q_DECLARE_PUBLIC(IoTAnalyticsClient)
    Q_DISABLE_COPY(IoTAnalyticsClientPrivate)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
