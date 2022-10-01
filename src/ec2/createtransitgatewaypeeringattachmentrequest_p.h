// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYPEERINGATTACHMENTREQUEST_P_H
#define QTAWS_CREATETRANSITGATEWAYPEERINGATTACHMENTREQUEST_P_H

#include "ec2request_p.h"
#include "createtransitgatewaypeeringattachmentrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateTransitGatewayPeeringAttachmentRequest;

class CreateTransitGatewayPeeringAttachmentRequestPrivate : public Ec2RequestPrivate {

public:
    CreateTransitGatewayPeeringAttachmentRequestPrivate(const Ec2Request::Action action,
                                   CreateTransitGatewayPeeringAttachmentRequest * const q);
    CreateTransitGatewayPeeringAttachmentRequestPrivate(const CreateTransitGatewayPeeringAttachmentRequestPrivate &other,
                                   CreateTransitGatewayPeeringAttachmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTransitGatewayPeeringAttachmentRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
