// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRANSITGATEWAYPOLICYTABLEREQUEST_P_H
#define QTAWS_DELETETRANSITGATEWAYPOLICYTABLEREQUEST_P_H

#include "ec2request_p.h"
#include "deletetransitgatewaypolicytablerequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteTransitGatewayPolicyTableRequest;

class DeleteTransitGatewayPolicyTableRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteTransitGatewayPolicyTableRequestPrivate(const Ec2Request::Action action,
                                   DeleteTransitGatewayPolicyTableRequest * const q);
    DeleteTransitGatewayPolicyTableRequestPrivate(const DeleteTransitGatewayPolicyTableRequestPrivate &other,
                                   DeleteTransitGatewayPolicyTableRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTransitGatewayPolicyTableRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
