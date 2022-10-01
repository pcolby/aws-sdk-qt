// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REPLACETRANSITGATEWAYROUTERESPONSE_H
#define QTAWS_REPLACETRANSITGATEWAYROUTERESPONSE_H

#include "ec2response.h"
#include "replacetransitgatewayrouterequest.h"

namespace QtAws {
namespace Ec2 {

class ReplaceTransitGatewayRouteResponsePrivate;

class QTAWSEC2_EXPORT ReplaceTransitGatewayRouteResponse : public Ec2Response {
    Q_OBJECT

public:
    ReplaceTransitGatewayRouteResponse(const ReplaceTransitGatewayRouteRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ReplaceTransitGatewayRouteRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReplaceTransitGatewayRouteResponse)
    Q_DISABLE_COPY(ReplaceTransitGatewayRouteResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
