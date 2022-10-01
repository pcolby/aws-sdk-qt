// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETRANSITGATEWAYROUTETABLERESPONSE_H
#define QTAWS_ASSOCIATETRANSITGATEWAYROUTETABLERESPONSE_H

#include "ec2response.h"
#include "associatetransitgatewayroutetablerequest.h"

namespace QtAws {
namespace Ec2 {

class AssociateTransitGatewayRouteTableResponsePrivate;

class QTAWSEC2_EXPORT AssociateTransitGatewayRouteTableResponse : public Ec2Response {
    Q_OBJECT

public:
    AssociateTransitGatewayRouteTableResponse(const AssociateTransitGatewayRouteTableRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateTransitGatewayRouteTableRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateTransitGatewayRouteTableResponse)
    Q_DISABLE_COPY(AssociateTransitGatewayRouteTableResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
