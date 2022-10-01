// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PRIVATENETWORKSCLIENT_P_H
#define QTAWS_PRIVATENETWORKSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace PrivateNetworks {

class PrivateNetworksClient;

class PrivateNetworksClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit PrivateNetworksClientPrivate(PrivateNetworksClient * const q);

private:
    Q_DECLARE_PUBLIC(PrivateNetworksClient)
    Q_DISABLE_COPY(PrivateNetworksClientPrivate)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
