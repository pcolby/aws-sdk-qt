// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTTRANSITGATEWAYPEERINGATTACHMENTRESPONSE_H
#define QTAWS_ACCEPTTRANSITGATEWAYPEERINGATTACHMENTRESPONSE_H

#include "ec2response.h"
#include "accepttransitgatewaypeeringattachmentrequest.h"

namespace QtAws {
namespace Ec2 {

class AcceptTransitGatewayPeeringAttachmentResponsePrivate;

class QTAWSEC2_EXPORT AcceptTransitGatewayPeeringAttachmentResponse : public Ec2Response {
    Q_OBJECT

public:
    AcceptTransitGatewayPeeringAttachmentResponse(const AcceptTransitGatewayPeeringAttachmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AcceptTransitGatewayPeeringAttachmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptTransitGatewayPeeringAttachmentResponse)
    Q_DISABLE_COPY(AcceptTransitGatewayPeeringAttachmentResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
