// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATETHIRDPARTYFIREWALLRESPONSE_H
#define QTAWS_DISASSOCIATETHIRDPARTYFIREWALLRESPONSE_H

#include "fmsresponse.h"
#include "disassociatethirdpartyfirewallrequest.h"

namespace QtAws {
namespace Fms {

class DisassociateThirdPartyFirewallResponsePrivate;

class QTAWSFMS_EXPORT DisassociateThirdPartyFirewallResponse : public FmsResponse {
    Q_OBJECT

public:
    DisassociateThirdPartyFirewallResponse(const DisassociateThirdPartyFirewallRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateThirdPartyFirewallRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateThirdPartyFirewallResponse)
    Q_DISABLE_COPY(DisassociateThirdPartyFirewallResponse)

};

} // namespace Fms
} // namespace QtAws

#endif
