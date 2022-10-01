// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSITGATEWAYPOLICYTABLEASSOCIATIONSREQUEST_P_H
#define QTAWS_GETTRANSITGATEWAYPOLICYTABLEASSOCIATIONSREQUEST_P_H

#include "ec2request_p.h"
#include "gettransitgatewaypolicytableassociationsrequest.h"

namespace QtAws {
namespace Ec2 {

class GetTransitGatewayPolicyTableAssociationsRequest;

class GetTransitGatewayPolicyTableAssociationsRequestPrivate : public Ec2RequestPrivate {

public:
    GetTransitGatewayPolicyTableAssociationsRequestPrivate(const Ec2Request::Action action,
                                   GetTransitGatewayPolicyTableAssociationsRequest * const q);
    GetTransitGatewayPolicyTableAssociationsRequestPrivate(const GetTransitGatewayPolicyTableAssociationsRequestPrivate &other,
                                   GetTransitGatewayPolicyTableAssociationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTransitGatewayPolicyTableAssociationsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
