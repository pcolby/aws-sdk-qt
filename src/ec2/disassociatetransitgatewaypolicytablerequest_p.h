// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATETRANSITGATEWAYPOLICYTABLEREQUEST_P_H
#define QTAWS_DISASSOCIATETRANSITGATEWAYPOLICYTABLEREQUEST_P_H

#include "ec2request_p.h"
#include "disassociatetransitgatewaypolicytablerequest.h"

namespace QtAws {
namespace Ec2 {

class DisassociateTransitGatewayPolicyTableRequest;

class DisassociateTransitGatewayPolicyTableRequestPrivate : public Ec2RequestPrivate {

public:
    DisassociateTransitGatewayPolicyTableRequestPrivate(const Ec2Request::Action action,
                                   DisassociateTransitGatewayPolicyTableRequest * const q);
    DisassociateTransitGatewayPolicyTableRequestPrivate(const DisassociateTransitGatewayPolicyTableRequestPrivate &other,
                                   DisassociateTransitGatewayPolicyTableRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateTransitGatewayPolicyTableRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
