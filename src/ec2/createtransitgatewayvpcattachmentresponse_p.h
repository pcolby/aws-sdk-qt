// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYVPCATTACHMENTRESPONSE_P_H
#define QTAWS_CREATETRANSITGATEWAYVPCATTACHMENTRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateTransitGatewayVpcAttachmentResponse;

class CreateTransitGatewayVpcAttachmentResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateTransitGatewayVpcAttachmentResponsePrivate(CreateTransitGatewayVpcAttachmentResponse * const q);

    void parseCreateTransitGatewayVpcAttachmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTransitGatewayVpcAttachmentResponse)
    Q_DISABLE_COPY(CreateTransitGatewayVpcAttachmentResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
