// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYLOCALGATEWAYROUTERESPONSE_H
#define QTAWS_MODIFYLOCALGATEWAYROUTERESPONSE_H

#include "ec2response.h"
#include "modifylocalgatewayrouterequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyLocalGatewayRouteResponsePrivate;

class QTAWSEC2_EXPORT ModifyLocalGatewayRouteResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifyLocalGatewayRouteResponse(const ModifyLocalGatewayRouteRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyLocalGatewayRouteRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyLocalGatewayRouteResponse)
    Q_DISABLE_COPY(ModifyLocalGatewayRouteResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
