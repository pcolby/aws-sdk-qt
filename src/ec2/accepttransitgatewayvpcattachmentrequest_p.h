// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTTRANSITGATEWAYVPCATTACHMENTREQUEST_P_H
#define QTAWS_ACCEPTTRANSITGATEWAYVPCATTACHMENTREQUEST_P_H

#include "ec2request_p.h"
#include "accepttransitgatewayvpcattachmentrequest.h"

namespace QtAws {
namespace Ec2 {

class AcceptTransitGatewayVpcAttachmentRequest;

class AcceptTransitGatewayVpcAttachmentRequestPrivate : public Ec2RequestPrivate {

public:
    AcceptTransitGatewayVpcAttachmentRequestPrivate(const Ec2Request::Action action,
                                   AcceptTransitGatewayVpcAttachmentRequest * const q);
    AcceptTransitGatewayVpcAttachmentRequestPrivate(const AcceptTransitGatewayVpcAttachmentRequestPrivate &other,
                                   AcceptTransitGatewayVpcAttachmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(AcceptTransitGatewayVpcAttachmentRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
