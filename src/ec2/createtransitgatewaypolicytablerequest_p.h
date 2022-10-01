// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYPOLICYTABLEREQUEST_P_H
#define QTAWS_CREATETRANSITGATEWAYPOLICYTABLEREQUEST_P_H

#include "ec2request_p.h"
#include "createtransitgatewaypolicytablerequest.h"

namespace QtAws {
namespace Ec2 {

class CreateTransitGatewayPolicyTableRequest;

class CreateTransitGatewayPolicyTableRequestPrivate : public Ec2RequestPrivate {

public:
    CreateTransitGatewayPolicyTableRequestPrivate(const Ec2Request::Action action,
                                   CreateTransitGatewayPolicyTableRequest * const q);
    CreateTransitGatewayPolicyTableRequestPrivate(const CreateTransitGatewayPolicyTableRequestPrivate &other,
                                   CreateTransitGatewayPolicyTableRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTransitGatewayPolicyTableRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
