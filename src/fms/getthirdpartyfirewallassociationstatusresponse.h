// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTHIRDPARTYFIREWALLASSOCIATIONSTATUSRESPONSE_H
#define QTAWS_GETTHIRDPARTYFIREWALLASSOCIATIONSTATUSRESPONSE_H

#include "fmsresponse.h"
#include "getthirdpartyfirewallassociationstatusrequest.h"

namespace QtAws {
namespace Fms {

class GetThirdPartyFirewallAssociationStatusResponsePrivate;

class QTAWSFMS_EXPORT GetThirdPartyFirewallAssociationStatusResponse : public FmsResponse {
    Q_OBJECT

public:
    GetThirdPartyFirewallAssociationStatusResponse(const GetThirdPartyFirewallAssociationStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetThirdPartyFirewallAssociationStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetThirdPartyFirewallAssociationStatusResponse)
    Q_DISABLE_COPY(GetThirdPartyFirewallAssociationStatusResponse)

};

} // namespace Fms
} // namespace QtAws

#endif
