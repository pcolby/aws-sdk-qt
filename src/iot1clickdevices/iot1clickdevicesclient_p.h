// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOT1CLICKDEVICESCLIENT_P_H
#define QTAWS_IOT1CLICKDEVICESCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace IoT1ClickDevices {

class IoT1ClickDevicesClient;

class IoT1ClickDevicesClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit IoT1ClickDevicesClientPrivate(IoT1ClickDevicesClient * const q);

private:
    Q_DECLARE_PUBLIC(IoT1ClickDevicesClient)
    Q_DISABLE_COPY(IoT1ClickDevicesClientPrivate)

};

} // namespace IoT1ClickDevices
} // namespace QtAws

#endif
