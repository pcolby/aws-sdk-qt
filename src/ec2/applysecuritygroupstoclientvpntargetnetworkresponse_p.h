// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLYSECURITYGROUPSTOCLIENTVPNTARGETNETWORKRESPONSE_P_H
#define QTAWS_APPLYSECURITYGROUPSTOCLIENTVPNTARGETNETWORKRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ApplySecurityGroupsToClientVpnTargetNetworkResponse;

class ApplySecurityGroupsToClientVpnTargetNetworkResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ApplySecurityGroupsToClientVpnTargetNetworkResponsePrivate(ApplySecurityGroupsToClientVpnTargetNetworkResponse * const q);

    void parseApplySecurityGroupsToClientVpnTargetNetworkResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ApplySecurityGroupsToClientVpnTargetNetworkResponse)
    Q_DISABLE_COPY(ApplySecurityGroupsToClientVpnTargetNetworkResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
