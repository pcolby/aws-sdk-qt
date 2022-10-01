// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTCLIENT_P_H
#define QTAWS_IOTCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace IoT {

class IoTClient;

class IoTClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit IoTClientPrivate(IoTClient * const q);

private:
    Q_DECLARE_PUBLIC(IoTClient)
    Q_DISABLE_COPY(IoTClientPrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
