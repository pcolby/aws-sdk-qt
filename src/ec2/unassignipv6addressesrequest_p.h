// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNASSIGNIPV6ADDRESSESREQUEST_P_H
#define QTAWS_UNASSIGNIPV6ADDRESSESREQUEST_P_H

#include "ec2request_p.h"
#include "unassignipv6addressesrequest.h"

namespace QtAws {
namespace Ec2 {

class UnassignIpv6AddressesRequest;

class UnassignIpv6AddressesRequestPrivate : public Ec2RequestPrivate {

public:
    UnassignIpv6AddressesRequestPrivate(const Ec2Request::Action action,
                                   UnassignIpv6AddressesRequest * const q);
    UnassignIpv6AddressesRequestPrivate(const UnassignIpv6AddressesRequestPrivate &other,
                                   UnassignIpv6AddressesRequest * const q);

private:
    Q_DECLARE_PUBLIC(UnassignIpv6AddressesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
