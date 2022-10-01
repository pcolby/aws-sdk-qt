// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NETWORKFIREWALLREQUEST_P_H
#define QTAWS_NETWORKFIREWALLREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "networkfirewallrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class NetworkFirewallRequest;

class NetworkFirewallRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    NetworkFirewallRequest::Action action; ///< NetworkFirewall action to be performed.
    QString apiVersion;        ///< NetworkFirewall API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< NetworkFirewall request (query string) parameters. @todo?

    NetworkFirewallRequestPrivate(const NetworkFirewallRequest::Action action, NetworkFirewallRequest * const q);
    NetworkFirewallRequestPrivate(const NetworkFirewallRequestPrivate &other, NetworkFirewallRequest * const q);

    static QString toString(const NetworkFirewallRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(NetworkFirewallRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
