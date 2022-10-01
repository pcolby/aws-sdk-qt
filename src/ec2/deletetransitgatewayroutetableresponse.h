// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRANSITGATEWAYROUTETABLERESPONSE_H
#define QTAWS_DELETETRANSITGATEWAYROUTETABLERESPONSE_H

#include "ec2response.h"
#include "deletetransitgatewayroutetablerequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteTransitGatewayRouteTableResponsePrivate;

class QTAWSEC2_EXPORT DeleteTransitGatewayRouteTableResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteTransitGatewayRouteTableResponse(const DeleteTransitGatewayRouteTableRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTransitGatewayRouteTableRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTransitGatewayRouteTableResponse)
    Q_DISABLE_COPY(DeleteTransitGatewayRouteTableResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
