// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSITGATEWAYPOLICYTABLEENTRIESREQUEST_P_H
#define QTAWS_GETTRANSITGATEWAYPOLICYTABLEENTRIESREQUEST_P_H

#include "ec2request_p.h"
#include "gettransitgatewaypolicytableentriesrequest.h"

namespace QtAws {
namespace Ec2 {

class GetTransitGatewayPolicyTableEntriesRequest;

class GetTransitGatewayPolicyTableEntriesRequestPrivate : public Ec2RequestPrivate {

public:
    GetTransitGatewayPolicyTableEntriesRequestPrivate(const Ec2Request::Action action,
                                   GetTransitGatewayPolicyTableEntriesRequest * const q);
    GetTransitGatewayPolicyTableEntriesRequestPrivate(const GetTransitGatewayPolicyTableEntriesRequestPrivate &other,
                                   GetTransitGatewayPolicyTableEntriesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTransitGatewayPolicyTableEntriesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
