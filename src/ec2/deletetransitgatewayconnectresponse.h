// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRANSITGATEWAYCONNECTRESPONSE_H
#define QTAWS_DELETETRANSITGATEWAYCONNECTRESPONSE_H

#include "ec2response.h"
#include "deletetransitgatewayconnectrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteTransitGatewayConnectResponsePrivate;

class QTAWSEC2_EXPORT DeleteTransitGatewayConnectResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteTransitGatewayConnectResponse(const DeleteTransitGatewayConnectRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTransitGatewayConnectRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTransitGatewayConnectResponse)
    Q_DISABLE_COPY(DeleteTransitGatewayConnectResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
