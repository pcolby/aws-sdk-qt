// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTWIRELESSCLIENT_P_H
#define QTAWS_IOTWIRELESSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace IoTWireless {

class IoTWirelessClient;

class IoTWirelessClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit IoTWirelessClientPrivate(IoTWirelessClient * const q);

private:
    Q_DECLARE_PUBLIC(IoTWirelessClient)
    Q_DISABLE_COPY(IoTWirelessClientPrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
