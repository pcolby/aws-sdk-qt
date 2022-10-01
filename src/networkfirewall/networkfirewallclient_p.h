// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NETWORKFIREWALLCLIENT_P_H
#define QTAWS_NETWORKFIREWALLCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace NetworkFirewall {

class NetworkFirewallClient;

class NetworkFirewallClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit NetworkFirewallClientPrivate(NetworkFirewallClient * const q);

private:
    Q_DECLARE_PUBLIC(NetworkFirewallClient)
    Q_DISABLE_COPY(NetworkFirewallClientPrivate)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
