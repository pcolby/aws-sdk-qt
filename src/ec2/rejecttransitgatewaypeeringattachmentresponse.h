// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTTRANSITGATEWAYPEERINGATTACHMENTRESPONSE_H
#define QTAWS_REJECTTRANSITGATEWAYPEERINGATTACHMENTRESPONSE_H

#include "ec2response.h"
#include "rejecttransitgatewaypeeringattachmentrequest.h"

namespace QtAws {
namespace Ec2 {

class RejectTransitGatewayPeeringAttachmentResponsePrivate;

class QTAWSEC2_EXPORT RejectTransitGatewayPeeringAttachmentResponse : public Ec2Response {
    Q_OBJECT

public:
    RejectTransitGatewayPeeringAttachmentResponse(const RejectTransitGatewayPeeringAttachmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RejectTransitGatewayPeeringAttachmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RejectTransitGatewayPeeringAttachmentResponse)
    Q_DISABLE_COPY(RejectTransitGatewayPeeringAttachmentResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
