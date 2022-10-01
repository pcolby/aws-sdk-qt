// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERTRANSITGATEWAYMULTICASTGROUPMEMBERSRESPONSE_P_H
#define QTAWS_DEREGISTERTRANSITGATEWAYMULTICASTGROUPMEMBERSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeregisterTransitGatewayMulticastGroupMembersResponse;

class DeregisterTransitGatewayMulticastGroupMembersResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeregisterTransitGatewayMulticastGroupMembersResponsePrivate(DeregisterTransitGatewayMulticastGroupMembersResponse * const q);

    void parseDeregisterTransitGatewayMulticastGroupMembersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeregisterTransitGatewayMulticastGroupMembersResponse)
    Q_DISABLE_COPY(DeregisterTransitGatewayMulticastGroupMembersResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
