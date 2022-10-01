// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETRANSITGATEWAYPOLICYTABLEREQUEST_P_H
#define QTAWS_ASSOCIATETRANSITGATEWAYPOLICYTABLEREQUEST_P_H

#include "ec2request_p.h"
#include "associatetransitgatewaypolicytablerequest.h"

namespace QtAws {
namespace Ec2 {

class AssociateTransitGatewayPolicyTableRequest;

class AssociateTransitGatewayPolicyTableRequestPrivate : public Ec2RequestPrivate {

public:
    AssociateTransitGatewayPolicyTableRequestPrivate(const Ec2Request::Action action,
                                   AssociateTransitGatewayPolicyTableRequest * const q);
    AssociateTransitGatewayPolicyTableRequestPrivate(const AssociateTransitGatewayPolicyTableRequestPrivate &other,
                                   AssociateTransitGatewayPolicyTableRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateTransitGatewayPolicyTableRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
