// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTSECURETUNNELINGCLIENT_P_H
#define QTAWS_IOTSECURETUNNELINGCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace IoTSecureTunneling {

class IoTSecureTunnelingClient;

class IoTSecureTunnelingClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit IoTSecureTunnelingClientPrivate(IoTSecureTunnelingClient * const q);

private:
    Q_DECLARE_PUBLIC(IoTSecureTunnelingClient)
    Q_DISABLE_COPY(IoTSecureTunnelingClientPrivate)

};

} // namespace IoTSecureTunneling
} // namespace QtAws

#endif
