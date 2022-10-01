// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTTRANSITGATEWAYVPCATTACHMENTRESPONSE_P_H
#define QTAWS_ACCEPTTRANSITGATEWAYVPCATTACHMENTRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class AcceptTransitGatewayVpcAttachmentResponse;

class AcceptTransitGatewayVpcAttachmentResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit AcceptTransitGatewayVpcAttachmentResponsePrivate(AcceptTransitGatewayVpcAttachmentResponse * const q);

    void parseAcceptTransitGatewayVpcAttachmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AcceptTransitGatewayVpcAttachmentResponse)
    Q_DISABLE_COPY(AcceptTransitGatewayVpcAttachmentResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
