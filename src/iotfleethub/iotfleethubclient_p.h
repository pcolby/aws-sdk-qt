// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTFLEETHUBCLIENT_P_H
#define QTAWS_IOTFLEETHUBCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace IoTFleetHub {

class IoTFleetHubClient;

class IoTFleetHubClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit IoTFleetHubClientPrivate(IoTFleetHubClient * const q);

private:
    Q_DECLARE_PUBLIC(IoTFleetHubClient)
    Q_DISABLE_COPY(IoTFleetHubClientPrivate)

};

} // namespace IoTFleetHub
} // namespace QtAws

#endif
