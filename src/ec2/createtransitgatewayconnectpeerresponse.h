// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYCONNECTPEERRESPONSE_H
#define QTAWS_CREATETRANSITGATEWAYCONNECTPEERRESPONSE_H

#include "ec2response.h"
#include "createtransitgatewayconnectpeerrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateTransitGatewayConnectPeerResponsePrivate;

class QTAWSEC2_EXPORT CreateTransitGatewayConnectPeerResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateTransitGatewayConnectPeerResponse(const CreateTransitGatewayConnectPeerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTransitGatewayConnectPeerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTransitGatewayConnectPeerResponse)
    Q_DISABLE_COPY(CreateTransitGatewayConnectPeerResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
