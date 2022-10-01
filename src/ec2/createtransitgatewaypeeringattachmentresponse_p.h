// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYPEERINGATTACHMENTRESPONSE_P_H
#define QTAWS_CREATETRANSITGATEWAYPEERINGATTACHMENTRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateTransitGatewayPeeringAttachmentResponse;

class CreateTransitGatewayPeeringAttachmentResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateTransitGatewayPeeringAttachmentResponsePrivate(CreateTransitGatewayPeeringAttachmentResponse * const q);

    void parseCreateTransitGatewayPeeringAttachmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTransitGatewayPeeringAttachmentResponse)
    Q_DISABLE_COPY(CreateTransitGatewayPeeringAttachmentResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
