// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERTRANSITGATEWAYMULTICASTGROUPSOURCESRESPONSE_P_H
#define QTAWS_REGISTERTRANSITGATEWAYMULTICASTGROUPSOURCESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class RegisterTransitGatewayMulticastGroupSourcesResponse;

class RegisterTransitGatewayMulticastGroupSourcesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit RegisterTransitGatewayMulticastGroupSourcesResponsePrivate(RegisterTransitGatewayMulticastGroupSourcesResponse * const q);

    void parseRegisterTransitGatewayMulticastGroupSourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterTransitGatewayMulticastGroupSourcesResponse)
    Q_DISABLE_COPY(RegisterTransitGatewayMulticastGroupSourcesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
