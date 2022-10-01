// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFIREWALLRESPONSE_H
#define QTAWS_DELETEFIREWALLRESPONSE_H

#include "networkfirewallresponse.h"
#include "deletefirewallrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class DeleteFirewallResponsePrivate;

class QTAWSNETWORKFIREWALL_EXPORT DeleteFirewallResponse : public NetworkFirewallResponse {
    Q_OBJECT

public:
    DeleteFirewallResponse(const DeleteFirewallRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteFirewallRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFirewallResponse)
    Q_DISABLE_COPY(DeleteFirewallResponse)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
