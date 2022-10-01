// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOCALGATEWAYROUTETABLERESPONSE_H
#define QTAWS_DELETELOCALGATEWAYROUTETABLERESPONSE_H

#include "ec2response.h"
#include "deletelocalgatewayroutetablerequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteLocalGatewayRouteTableResponsePrivate;

class QTAWSEC2_EXPORT DeleteLocalGatewayRouteTableResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteLocalGatewayRouteTableResponse(const DeleteLocalGatewayRouteTableRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteLocalGatewayRouteTableRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLocalGatewayRouteTableResponse)
    Q_DISABLE_COPY(DeleteLocalGatewayRouteTableResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
