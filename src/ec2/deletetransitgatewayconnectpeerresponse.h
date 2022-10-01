// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRANSITGATEWAYCONNECTPEERRESPONSE_H
#define QTAWS_DELETETRANSITGATEWAYCONNECTPEERRESPONSE_H

#include "ec2response.h"
#include "deletetransitgatewayconnectpeerrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteTransitGatewayConnectPeerResponsePrivate;

class QTAWSEC2_EXPORT DeleteTransitGatewayConnectPeerResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteTransitGatewayConnectPeerResponse(const DeleteTransitGatewayConnectPeerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTransitGatewayConnectPeerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTransitGatewayConnectPeerResponse)
    Q_DISABLE_COPY(DeleteTransitGatewayConnectPeerResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
