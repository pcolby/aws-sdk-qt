// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFIREWALLRESPONSE_H
#define QTAWS_CREATEFIREWALLRESPONSE_H

#include "networkfirewallresponse.h"
#include "createfirewallrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class CreateFirewallResponsePrivate;

class QTAWSNETWORKFIREWALL_EXPORT CreateFirewallResponse : public NetworkFirewallResponse {
    Q_OBJECT

public:
    CreateFirewallResponse(const CreateFirewallRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateFirewallRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFirewallResponse)
    Q_DISABLE_COPY(CreateFirewallResponse)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
