// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYROUTERESPONSE_H
#define QTAWS_CREATETRANSITGATEWAYROUTERESPONSE_H

#include "ec2response.h"
#include "createtransitgatewayrouterequest.h"

namespace QtAws {
namespace Ec2 {

class CreateTransitGatewayRouteResponsePrivate;

class QTAWSEC2_EXPORT CreateTransitGatewayRouteResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateTransitGatewayRouteResponse(const CreateTransitGatewayRouteRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTransitGatewayRouteRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTransitGatewayRouteResponse)
    Q_DISABLE_COPY(CreateTransitGatewayRouteResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
