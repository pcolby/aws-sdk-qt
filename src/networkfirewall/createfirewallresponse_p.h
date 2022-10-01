// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFIREWALLRESPONSE_P_H
#define QTAWS_CREATEFIREWALLRESPONSE_P_H

#include "networkfirewallresponse_p.h"

namespace QtAws {
namespace NetworkFirewall {

class CreateFirewallResponse;

class CreateFirewallResponsePrivate : public NetworkFirewallResponsePrivate {

public:

    explicit CreateFirewallResponsePrivate(CreateFirewallResponse * const q);

    void parseCreateFirewallResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateFirewallResponse)
    Q_DISABLE_COPY(CreateFirewallResponsePrivate)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
