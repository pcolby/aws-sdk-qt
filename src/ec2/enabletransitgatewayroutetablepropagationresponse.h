// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLETRANSITGATEWAYROUTETABLEPROPAGATIONRESPONSE_H
#define QTAWS_ENABLETRANSITGATEWAYROUTETABLEPROPAGATIONRESPONSE_H

#include "ec2response.h"
#include "enabletransitgatewayroutetablepropagationrequest.h"

namespace QtAws {
namespace Ec2 {

class EnableTransitGatewayRouteTablePropagationResponsePrivate;

class QTAWSEC2_EXPORT EnableTransitGatewayRouteTablePropagationResponse : public Ec2Response {
    Q_OBJECT

public:
    EnableTransitGatewayRouteTablePropagationResponse(const EnableTransitGatewayRouteTablePropagationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableTransitGatewayRouteTablePropagationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableTransitGatewayRouteTablePropagationResponse)
    Q_DISABLE_COPY(EnableTransitGatewayRouteTablePropagationResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
