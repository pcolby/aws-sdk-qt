// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRANSITGATEWAYROUTETABLEANNOUNCEMENTSRESPONSE_H
#define QTAWS_DESCRIBETRANSITGATEWAYROUTETABLEANNOUNCEMENTSRESPONSE_H

#include "ec2response.h"
#include "describetransitgatewayroutetableannouncementsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeTransitGatewayRouteTableAnnouncementsResponsePrivate;

class QTAWSEC2_EXPORT DescribeTransitGatewayRouteTableAnnouncementsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeTransitGatewayRouteTableAnnouncementsResponse(const DescribeTransitGatewayRouteTableAnnouncementsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTransitGatewayRouteTableAnnouncementsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTransitGatewayRouteTableAnnouncementsResponse)
    Q_DISABLE_COPY(DescribeTransitGatewayRouteTableAnnouncementsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
