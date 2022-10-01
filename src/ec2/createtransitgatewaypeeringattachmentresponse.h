// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYPEERINGATTACHMENTRESPONSE_H
#define QTAWS_CREATETRANSITGATEWAYPEERINGATTACHMENTRESPONSE_H

#include "ec2response.h"
#include "createtransitgatewaypeeringattachmentrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateTransitGatewayPeeringAttachmentResponsePrivate;

class QTAWSEC2_EXPORT CreateTransitGatewayPeeringAttachmentResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateTransitGatewayPeeringAttachmentResponse(const CreateTransitGatewayPeeringAttachmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTransitGatewayPeeringAttachmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTransitGatewayPeeringAttachmentResponse)
    Q_DISABLE_COPY(CreateTransitGatewayPeeringAttachmentResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
