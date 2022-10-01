// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATESUBNETSRESPONSE_P_H
#define QTAWS_DISASSOCIATESUBNETSRESPONSE_P_H

#include "networkfirewallresponse_p.h"

namespace QtAws {
namespace NetworkFirewall {

class DisassociateSubnetsResponse;

class DisassociateSubnetsResponsePrivate : public NetworkFirewallResponsePrivate {

public:

    explicit DisassociateSubnetsResponsePrivate(DisassociateSubnetsResponse * const q);

    void parseDisassociateSubnetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateSubnetsResponse)
    Q_DISABLE_COPY(DisassociateSubnetsResponsePrivate)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
