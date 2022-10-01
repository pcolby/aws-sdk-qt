// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATESUBNETSRESPONSE_H
#define QTAWS_ASSOCIATESUBNETSRESPONSE_H

#include "networkfirewallresponse.h"
#include "associatesubnetsrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class AssociateSubnetsResponsePrivate;

class QTAWSNETWORKFIREWALL_EXPORT AssociateSubnetsResponse : public NetworkFirewallResponse {
    Q_OBJECT

public:
    AssociateSubnetsResponse(const AssociateSubnetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateSubnetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateSubnetsResponse)
    Q_DISABLE_COPY(AssociateSubnetsResponse)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
