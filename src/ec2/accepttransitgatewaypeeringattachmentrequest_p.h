// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTTRANSITGATEWAYPEERINGATTACHMENTREQUEST_P_H
#define QTAWS_ACCEPTTRANSITGATEWAYPEERINGATTACHMENTREQUEST_P_H

#include "ec2request_p.h"
#include "accepttransitgatewaypeeringattachmentrequest.h"

namespace QtAws {
namespace Ec2 {

class AcceptTransitGatewayPeeringAttachmentRequest;

class AcceptTransitGatewayPeeringAttachmentRequestPrivate : public Ec2RequestPrivate {

public:
    AcceptTransitGatewayPeeringAttachmentRequestPrivate(const Ec2Request::Action action,
                                   AcceptTransitGatewayPeeringAttachmentRequest * const q);
    AcceptTransitGatewayPeeringAttachmentRequestPrivate(const AcceptTransitGatewayPeeringAttachmentRequestPrivate &other,
                                   AcceptTransitGatewayPeeringAttachmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(AcceptTransitGatewayPeeringAttachmentRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
