// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESUBNETCHANGEPROTECTIONRESPONSE_P_H
#define QTAWS_UPDATESUBNETCHANGEPROTECTIONRESPONSE_P_H

#include "networkfirewallresponse_p.h"

namespace QtAws {
namespace NetworkFirewall {

class UpdateSubnetChangeProtectionResponse;

class UpdateSubnetChangeProtectionResponsePrivate : public NetworkFirewallResponsePrivate {

public:

    explicit UpdateSubnetChangeProtectionResponsePrivate(UpdateSubnetChangeProtectionResponse * const q);

    void parseUpdateSubnetChangeProtectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSubnetChangeProtectionResponse)
    Q_DISABLE_COPY(UpdateSubnetChangeProtectionResponsePrivate)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
