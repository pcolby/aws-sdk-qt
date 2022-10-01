// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTTRANSITGATEWAYPEERINGATTACHMENTRESPONSE_P_H
#define QTAWS_ACCEPTTRANSITGATEWAYPEERINGATTACHMENTRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class AcceptTransitGatewayPeeringAttachmentResponse;

class AcceptTransitGatewayPeeringAttachmentResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit AcceptTransitGatewayPeeringAttachmentResponsePrivate(AcceptTransitGatewayPeeringAttachmentResponse * const q);

    void parseAcceptTransitGatewayPeeringAttachmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AcceptTransitGatewayPeeringAttachmentResponse)
    Q_DISABLE_COPY(AcceptTransitGatewayPeeringAttachmentResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
