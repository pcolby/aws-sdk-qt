// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTHIRDPARTYFIREWALLASSOCIATIONSTATUSRESPONSE_P_H
#define QTAWS_GETTHIRDPARTYFIREWALLASSOCIATIONSTATUSRESPONSE_P_H

#include "fmsresponse_p.h"

namespace QtAws {
namespace Fms {

class GetThirdPartyFirewallAssociationStatusResponse;

class GetThirdPartyFirewallAssociationStatusResponsePrivate : public FmsResponsePrivate {

public:

    explicit GetThirdPartyFirewallAssociationStatusResponsePrivate(GetThirdPartyFirewallAssociationStatusResponse * const q);

    void parseGetThirdPartyFirewallAssociationStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetThirdPartyFirewallAssociationStatusResponse)
    Q_DISABLE_COPY(GetThirdPartyFirewallAssociationStatusResponsePrivate)

};

} // namespace Fms
} // namespace QtAws

#endif
