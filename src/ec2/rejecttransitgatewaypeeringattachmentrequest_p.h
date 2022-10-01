// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTTRANSITGATEWAYPEERINGATTACHMENTREQUEST_P_H
#define QTAWS_REJECTTRANSITGATEWAYPEERINGATTACHMENTREQUEST_P_H

#include "ec2request_p.h"
#include "rejecttransitgatewaypeeringattachmentrequest.h"

namespace QtAws {
namespace Ec2 {

class RejectTransitGatewayPeeringAttachmentRequest;

class RejectTransitGatewayPeeringAttachmentRequestPrivate : public Ec2RequestPrivate {

public:
    RejectTransitGatewayPeeringAttachmentRequestPrivate(const Ec2Request::Action action,
                                   RejectTransitGatewayPeeringAttachmentRequest * const q);
    RejectTransitGatewayPeeringAttachmentRequestPrivate(const RejectTransitGatewayPeeringAttachmentRequestPrivate &other,
                                   RejectTransitGatewayPeeringAttachmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(RejectTransitGatewayPeeringAttachmentRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
