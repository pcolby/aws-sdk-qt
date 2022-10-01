// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOCALGATEWAYROUTERESPONSE_H
#define QTAWS_DELETELOCALGATEWAYROUTERESPONSE_H

#include "ec2response.h"
#include "deletelocalgatewayrouterequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteLocalGatewayRouteResponsePrivate;

class QTAWSEC2_EXPORT DeleteLocalGatewayRouteResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteLocalGatewayRouteResponse(const DeleteLocalGatewayRouteRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteLocalGatewayRouteRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLocalGatewayRouteResponse)
    Q_DISABLE_COPY(DeleteLocalGatewayRouteResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
