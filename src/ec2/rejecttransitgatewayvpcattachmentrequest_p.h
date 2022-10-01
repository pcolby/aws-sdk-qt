// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTTRANSITGATEWAYVPCATTACHMENTREQUEST_P_H
#define QTAWS_REJECTTRANSITGATEWAYVPCATTACHMENTREQUEST_P_H

#include "ec2request_p.h"
#include "rejecttransitgatewayvpcattachmentrequest.h"

namespace QtAws {
namespace Ec2 {

class RejectTransitGatewayVpcAttachmentRequest;

class RejectTransitGatewayVpcAttachmentRequestPrivate : public Ec2RequestPrivate {

public:
    RejectTransitGatewayVpcAttachmentRequestPrivate(const Ec2Request::Action action,
                                   RejectTransitGatewayVpcAttachmentRequest * const q);
    RejectTransitGatewayVpcAttachmentRequestPrivate(const RejectTransitGatewayVpcAttachmentRequestPrivate &other,
                                   RejectTransitGatewayVpcAttachmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(RejectTransitGatewayVpcAttachmentRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
