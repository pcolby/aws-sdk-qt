// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYTRANSITGATEWAYVPCATTACHMENTREQUEST_P_H
#define QTAWS_MODIFYTRANSITGATEWAYVPCATTACHMENTREQUEST_P_H

#include "ec2request_p.h"
#include "modifytransitgatewayvpcattachmentrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyTransitGatewayVpcAttachmentRequest;

class ModifyTransitGatewayVpcAttachmentRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyTransitGatewayVpcAttachmentRequestPrivate(const Ec2Request::Action action,
                                   ModifyTransitGatewayVpcAttachmentRequest * const q);
    ModifyTransitGatewayVpcAttachmentRequestPrivate(const ModifyTransitGatewayVpcAttachmentRequestPrivate &other,
                                   ModifyTransitGatewayVpcAttachmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyTransitGatewayVpcAttachmentRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
