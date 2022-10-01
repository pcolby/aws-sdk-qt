// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCALGATEWAYROUTETABLERESPONSE_H
#define QTAWS_CREATELOCALGATEWAYROUTETABLERESPONSE_H

#include "ec2response.h"
#include "createlocalgatewayroutetablerequest.h"

namespace QtAws {
namespace Ec2 {

class CreateLocalGatewayRouteTableResponsePrivate;

class QTAWSEC2_EXPORT CreateLocalGatewayRouteTableResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateLocalGatewayRouteTableResponse(const CreateLocalGatewayRouteTableRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLocalGatewayRouteTableRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLocalGatewayRouteTableResponse)
    Q_DISABLE_COPY(CreateLocalGatewayRouteTableResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
