// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATESUBNETSRESPONSE_H
#define QTAWS_DISASSOCIATESUBNETSRESPONSE_H

#include "networkfirewallresponse.h"
#include "disassociatesubnetsrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class DisassociateSubnetsResponsePrivate;

class QTAWSNETWORKFIREWALL_EXPORT DisassociateSubnetsResponse : public NetworkFirewallResponse {
    Q_OBJECT

public:
    DisassociateSubnetsResponse(const DisassociateSubnetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateSubnetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateSubnetsResponse)
    Q_DISABLE_COPY(DisassociateSubnetsResponse)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
