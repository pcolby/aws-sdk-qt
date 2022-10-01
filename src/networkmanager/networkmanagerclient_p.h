// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NETWORKMANAGERCLIENT_P_H
#define QTAWS_NETWORKMANAGERCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace NetworkManager {

class NetworkManagerClient;

class NetworkManagerClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit NetworkManagerClientPrivate(NetworkManagerClient * const q);

private:
    Q_DECLARE_PUBLIC(NetworkManagerClient)
    Q_DISABLE_COPY(NetworkManagerClientPrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
