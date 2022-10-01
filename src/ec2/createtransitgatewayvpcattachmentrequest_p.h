// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYVPCATTACHMENTREQUEST_P_H
#define QTAWS_CREATETRANSITGATEWAYVPCATTACHMENTREQUEST_P_H

#include "ec2request_p.h"
#include "createtransitgatewayvpcattachmentrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateTransitGatewayVpcAttachmentRequest;

class CreateTransitGatewayVpcAttachmentRequestPrivate : public Ec2RequestPrivate {

public:
    CreateTransitGatewayVpcAttachmentRequestPrivate(const Ec2Request::Action action,
                                   CreateTransitGatewayVpcAttachmentRequest * const q);
    CreateTransitGatewayVpcAttachmentRequestPrivate(const CreateTransitGatewayVpcAttachmentRequestPrivate &other,
                                   CreateTransitGatewayVpcAttachmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTransitGatewayVpcAttachmentRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
