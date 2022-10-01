// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRANSITGATEWAYROUTERESPONSE_H
#define QTAWS_DELETETRANSITGATEWAYROUTERESPONSE_H

#include "ec2response.h"
#include "deletetransitgatewayrouterequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteTransitGatewayRouteResponsePrivate;

class QTAWSEC2_EXPORT DeleteTransitGatewayRouteResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteTransitGatewayRouteResponse(const DeleteTransitGatewayRouteRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTransitGatewayRouteRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTransitGatewayRouteResponse)
    Q_DISABLE_COPY(DeleteTransitGatewayRouteResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
