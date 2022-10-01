// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYROUTETABLEANNOUNCEMENTRESPONSE_H
#define QTAWS_CREATETRANSITGATEWAYROUTETABLEANNOUNCEMENTRESPONSE_H

#include "ec2response.h"
#include "createtransitgatewayroutetableannouncementrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateTransitGatewayRouteTableAnnouncementResponsePrivate;

class QTAWSEC2_EXPORT CreateTransitGatewayRouteTableAnnouncementResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateTransitGatewayRouteTableAnnouncementResponse(const CreateTransitGatewayRouteTableAnnouncementRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTransitGatewayRouteTableAnnouncementRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTransitGatewayRouteTableAnnouncementResponse)
    Q_DISABLE_COPY(CreateTransitGatewayRouteTableAnnouncementResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
