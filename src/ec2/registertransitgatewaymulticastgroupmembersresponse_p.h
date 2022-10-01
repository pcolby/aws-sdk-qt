// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERTRANSITGATEWAYMULTICASTGROUPMEMBERSRESPONSE_P_H
#define QTAWS_REGISTERTRANSITGATEWAYMULTICASTGROUPMEMBERSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class RegisterTransitGatewayMulticastGroupMembersResponse;

class RegisterTransitGatewayMulticastGroupMembersResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit RegisterTransitGatewayMulticastGroupMembersResponsePrivate(RegisterTransitGatewayMulticastGroupMembersResponse * const q);

    void parseRegisterTransitGatewayMulticastGroupMembersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterTransitGatewayMulticastGroupMembersResponse)
    Q_DISABLE_COPY(RegisterTransitGatewayMulticastGroupMembersResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
