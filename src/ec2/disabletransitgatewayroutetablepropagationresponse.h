// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLETRANSITGATEWAYROUTETABLEPROPAGATIONRESPONSE_H
#define QTAWS_DISABLETRANSITGATEWAYROUTETABLEPROPAGATIONRESPONSE_H

#include "ec2response.h"
#include "disabletransitgatewayroutetablepropagationrequest.h"

namespace QtAws {
namespace Ec2 {

class DisableTransitGatewayRouteTablePropagationResponsePrivate;

class QTAWSEC2_EXPORT DisableTransitGatewayRouteTablePropagationResponse : public Ec2Response {
    Q_OBJECT

public:
    DisableTransitGatewayRouteTablePropagationResponse(const DisableTransitGatewayRouteTablePropagationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableTransitGatewayRouteTablePropagationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableTransitGatewayRouteTablePropagationResponse)
    Q_DISABLE_COPY(DisableTransitGatewayRouteTablePropagationResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
