// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFIREWALLDESCRIPTIONRESPONSE_P_H
#define QTAWS_UPDATEFIREWALLDESCRIPTIONRESPONSE_P_H

#include "networkfirewallresponse_p.h"

namespace QtAws {
namespace NetworkFirewall {

class UpdateFirewallDescriptionResponse;

class UpdateFirewallDescriptionResponsePrivate : public NetworkFirewallResponsePrivate {

public:

    explicit UpdateFirewallDescriptionResponsePrivate(UpdateFirewallDescriptionResponse * const q);

    void parseUpdateFirewallDescriptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFirewallDescriptionResponse)
    Q_DISABLE_COPY(UpdateFirewallDescriptionResponsePrivate)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
