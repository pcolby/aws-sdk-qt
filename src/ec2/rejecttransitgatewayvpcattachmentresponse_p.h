// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTTRANSITGATEWAYVPCATTACHMENTRESPONSE_P_H
#define QTAWS_REJECTTRANSITGATEWAYVPCATTACHMENTRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class RejectTransitGatewayVpcAttachmentResponse;

class RejectTransitGatewayVpcAttachmentResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit RejectTransitGatewayVpcAttachmentResponsePrivate(RejectTransitGatewayVpcAttachmentResponse * const q);

    void parseRejectTransitGatewayVpcAttachmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RejectTransitGatewayVpcAttachmentResponse)
    Q_DISABLE_COPY(RejectTransitGatewayVpcAttachmentResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
