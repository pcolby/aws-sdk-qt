// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETHIRDPARTYFIREWALLRESPONSE_H
#define QTAWS_ASSOCIATETHIRDPARTYFIREWALLRESPONSE_H

#include "fmsresponse.h"
#include "associatethirdpartyfirewallrequest.h"

namespace QtAws {
namespace Fms {

class AssociateThirdPartyFirewallResponsePrivate;

class QTAWSFMS_EXPORT AssociateThirdPartyFirewallResponse : public FmsResponse {
    Q_OBJECT

public:
    AssociateThirdPartyFirewallResponse(const AssociateThirdPartyFirewallRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateThirdPartyFirewallRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateThirdPartyFirewallResponse)
    Q_DISABLE_COPY(AssociateThirdPartyFirewallResponse)

};

} // namespace Fms
} // namespace QtAws

#endif
