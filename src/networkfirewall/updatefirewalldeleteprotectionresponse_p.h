// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFIREWALLDELETEPROTECTIONRESPONSE_P_H
#define QTAWS_UPDATEFIREWALLDELETEPROTECTIONRESPONSE_P_H

#include "networkfirewallresponse_p.h"

namespace QtAws {
namespace NetworkFirewall {

class UpdateFirewallDeleteProtectionResponse;

class UpdateFirewallDeleteProtectionResponsePrivate : public NetworkFirewallResponsePrivate {

public:

    explicit UpdateFirewallDeleteProtectionResponsePrivate(UpdateFirewallDeleteProtectionResponse * const q);

    void parseUpdateFirewallDeleteProtectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFirewallDeleteProtectionResponse)
    Q_DISABLE_COPY(UpdateFirewallDeleteProtectionResponsePrivate)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
