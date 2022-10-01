// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSITGATEWAYATTACHMENTPROPAGATIONSREQUEST_P_H
#define QTAWS_GETTRANSITGATEWAYATTACHMENTPROPAGATIONSREQUEST_P_H

#include "ec2request_p.h"
#include "gettransitgatewayattachmentpropagationsrequest.h"

namespace QtAws {
namespace Ec2 {

class GetTransitGatewayAttachmentPropagationsRequest;

class GetTransitGatewayAttachmentPropagationsRequestPrivate : public Ec2RequestPrivate {

public:
    GetTransitGatewayAttachmentPropagationsRequestPrivate(const Ec2Request::Action action,
                                   GetTransitGatewayAttachmentPropagationsRequest * const q);
    GetTransitGatewayAttachmentPropagationsRequestPrivate(const GetTransitGatewayAttachmentPropagationsRequestPrivate &other,
                                   GetTransitGatewayAttachmentPropagationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTransitGatewayAttachmentPropagationsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
