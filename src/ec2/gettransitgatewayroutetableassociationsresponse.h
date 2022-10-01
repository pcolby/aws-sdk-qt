// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSITGATEWAYROUTETABLEASSOCIATIONSRESPONSE_H
#define QTAWS_GETTRANSITGATEWAYROUTETABLEASSOCIATIONSRESPONSE_H

#include "ec2response.h"
#include "gettransitgatewayroutetableassociationsrequest.h"

namespace QtAws {
namespace Ec2 {

class GetTransitGatewayRouteTableAssociationsResponsePrivate;

class QTAWSEC2_EXPORT GetTransitGatewayRouteTableAssociationsResponse : public Ec2Response {
    Q_OBJECT

public:
    GetTransitGatewayRouteTableAssociationsResponse(const GetTransitGatewayRouteTableAssociationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTransitGatewayRouteTableAssociationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTransitGatewayRouteTableAssociationsResponse)
    Q_DISABLE_COPY(GetTransitGatewayRouteTableAssociationsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
