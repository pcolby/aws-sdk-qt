// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATESUBNETSRESPONSE_P_H
#define QTAWS_ASSOCIATESUBNETSRESPONSE_P_H

#include "networkfirewallresponse_p.h"

namespace QtAws {
namespace NetworkFirewall {

class AssociateSubnetsResponse;

class AssociateSubnetsResponsePrivate : public NetworkFirewallResponsePrivate {

public:

    explicit AssociateSubnetsResponsePrivate(AssociateSubnetsResponse * const q);

    void parseAssociateSubnetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateSubnetsResponse)
    Q_DISABLE_COPY(AssociateSubnetsResponsePrivate)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
