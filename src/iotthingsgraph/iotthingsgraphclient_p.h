// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTTHINGSGRAPHCLIENT_P_H
#define QTAWS_IOTTHINGSGRAPHCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace IoTThingsGraph {

class IoTThingsGraphClient;

class IoTThingsGraphClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit IoTThingsGraphClientPrivate(IoTThingsGraphClient * const q);

private:
    Q_DECLARE_PUBLIC(IoTThingsGraphClient)
    Q_DISABLE_COPY(IoTThingsGraphClientPrivate)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
