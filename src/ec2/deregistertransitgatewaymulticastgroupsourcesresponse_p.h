// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERTRANSITGATEWAYMULTICASTGROUPSOURCESRESPONSE_P_H
#define QTAWS_DEREGISTERTRANSITGATEWAYMULTICASTGROUPSOURCESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeregisterTransitGatewayMulticastGroupSourcesResponse;

class DeregisterTransitGatewayMulticastGroupSourcesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeregisterTransitGatewayMulticastGroupSourcesResponsePrivate(DeregisterTransitGatewayMulticastGroupSourcesResponse * const q);

    void parseDeregisterTransitGatewayMulticastGroupSourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeregisterTransitGatewayMulticastGroupSourcesResponse)
    Q_DISABLE_COPY(DeregisterTransitGatewayMulticastGroupSourcesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
