// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTEVENTSCLIENT_P_H
#define QTAWS_IOTEVENTSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace IoTEvents {

class IoTEventsClient;

class IoTEventsClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit IoTEventsClientPrivate(IoTEventsClient * const q);

private:
    Q_DECLARE_PUBLIC(IoTEventsClient)
    Q_DISABLE_COPY(IoTEventsClientPrivate)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
