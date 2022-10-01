// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHTRANSITGATEWAYMULTICASTGROUPSRESPONSE_P_H
#define QTAWS_SEARCHTRANSITGATEWAYMULTICASTGROUPSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class SearchTransitGatewayMulticastGroupsResponse;

class SearchTransitGatewayMulticastGroupsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit SearchTransitGatewayMulticastGroupsResponsePrivate(SearchTransitGatewayMulticastGroupsResponse * const q);

    void parseSearchTransitGatewayMulticastGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchTransitGatewayMulticastGroupsResponse)
    Q_DISABLE_COPY(SearchTransitGatewayMulticastGroupsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
