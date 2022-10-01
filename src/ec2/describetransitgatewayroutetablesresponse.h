// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRANSITGATEWAYROUTETABLESRESPONSE_H
#define QTAWS_DESCRIBETRANSITGATEWAYROUTETABLESRESPONSE_H

#include "ec2response.h"
#include "describetransitgatewayroutetablesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeTransitGatewayRouteTablesResponsePrivate;

class QTAWSEC2_EXPORT DescribeTransitGatewayRouteTablesResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeTransitGatewayRouteTablesResponse(const DescribeTransitGatewayRouteTablesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTransitGatewayRouteTablesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTransitGatewayRouteTablesResponse)
    Q_DISABLE_COPY(DescribeTransitGatewayRouteTablesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
