// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYROUTETABLERESPONSE_H
#define QTAWS_CREATETRANSITGATEWAYROUTETABLERESPONSE_H

#include "ec2response.h"
#include "createtransitgatewayroutetablerequest.h"

namespace QtAws {
namespace Ec2 {

class CreateTransitGatewayRouteTableResponsePrivate;

class QTAWSEC2_EXPORT CreateTransitGatewayRouteTableResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateTransitGatewayRouteTableResponse(const CreateTransitGatewayRouteTableRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTransitGatewayRouteTableRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTransitGatewayRouteTableResponse)
    Q_DISABLE_COPY(CreateTransitGatewayRouteTableResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
