// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NETWORKFIREWALLRESPONSE_H
#define QTAWS_NETWORKFIREWALLRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsnetworkfirewallglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace NetworkFirewall {

class NetworkFirewallResponsePrivate;

class QTAWSNETWORKFIREWALL_EXPORT NetworkFirewallResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    NetworkFirewallResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    NetworkFirewallResponse(NetworkFirewallResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(NetworkFirewallResponse)
    Q_DISABLE_COPY(NetworkFirewallResponse)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
