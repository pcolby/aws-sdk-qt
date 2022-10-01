// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTEVENTSDATACLIENT_P_H
#define QTAWS_IOTEVENTSDATACLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace IoTEventsData {

class IoTEventsDataClient;

class IoTEventsDataClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit IoTEventsDataClientPrivate(IoTEventsDataClient * const q);

private:
    Q_DECLARE_PUBLIC(IoTEventsDataClient)
    Q_DISABLE_COPY(IoTEventsDataClientPrivate)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
