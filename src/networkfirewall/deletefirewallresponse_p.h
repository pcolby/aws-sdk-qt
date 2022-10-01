// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFIREWALLRESPONSE_P_H
#define QTAWS_DELETEFIREWALLRESPONSE_P_H

#include "networkfirewallresponse_p.h"

namespace QtAws {
namespace NetworkFirewall {

class DeleteFirewallResponse;

class DeleteFirewallResponsePrivate : public NetworkFirewallResponsePrivate {

public:

    explicit DeleteFirewallResponsePrivate(DeleteFirewallResponse * const q);

    void parseDeleteFirewallResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFirewallResponse)
    Q_DISABLE_COPY(DeleteFirewallResponsePrivate)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
