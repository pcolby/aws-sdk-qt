// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATETRANSITGATEWAYROUTETABLERESPONSE_H
#define QTAWS_DISASSOCIATETRANSITGATEWAYROUTETABLERESPONSE_H

#include "ec2response.h"
#include "disassociatetransitgatewayroutetablerequest.h"

namespace QtAws {
namespace Ec2 {

class DisassociateTransitGatewayRouteTableResponsePrivate;

class QTAWSEC2_EXPORT DisassociateTransitGatewayRouteTableResponse : public Ec2Response {
    Q_OBJECT

public:
    DisassociateTransitGatewayRouteTableResponse(const DisassociateTransitGatewayRouteTableRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateTransitGatewayRouteTableRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateTransitGatewayRouteTableResponse)
    Q_DISABLE_COPY(DisassociateTransitGatewayRouteTableResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
