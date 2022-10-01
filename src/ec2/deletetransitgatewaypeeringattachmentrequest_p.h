// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRANSITGATEWAYPEERINGATTACHMENTREQUEST_P_H
#define QTAWS_DELETETRANSITGATEWAYPEERINGATTACHMENTREQUEST_P_H

#include "ec2request_p.h"
#include "deletetransitgatewaypeeringattachmentrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteTransitGatewayPeeringAttachmentRequest;

class DeleteTransitGatewayPeeringAttachmentRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteTransitGatewayPeeringAttachmentRequestPrivate(const Ec2Request::Action action,
                                   DeleteTransitGatewayPeeringAttachmentRequest * const q);
    DeleteTransitGatewayPeeringAttachmentRequestPrivate(const DeleteTransitGatewayPeeringAttachmentRequestPrivate &other,
                                   DeleteTransitGatewayPeeringAttachmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTransitGatewayPeeringAttachmentRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
