// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCALGATEWAYROUTERESPONSE_H
#define QTAWS_CREATELOCALGATEWAYROUTERESPONSE_H

#include "ec2response.h"
#include "createlocalgatewayrouterequest.h"

namespace QtAws {
namespace Ec2 {

class CreateLocalGatewayRouteResponsePrivate;

class QTAWSEC2_EXPORT CreateLocalGatewayRouteResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateLocalGatewayRouteResponse(const CreateLocalGatewayRouteRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLocalGatewayRouteRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLocalGatewayRouteResponse)
    Q_DISABLE_COPY(CreateLocalGatewayRouteResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
