// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSIGNIPV6ADDRESSESREQUEST_P_H
#define QTAWS_ASSIGNIPV6ADDRESSESREQUEST_P_H

#include "ec2request_p.h"
#include "assignipv6addressesrequest.h"

namespace QtAws {
namespace Ec2 {

class AssignIpv6AddressesRequest;

class AssignIpv6AddressesRequestPrivate : public Ec2RequestPrivate {

public:
    AssignIpv6AddressesRequestPrivate(const Ec2Request::Action action,
                                   AssignIpv6AddressesRequest * const q);
    AssignIpv6AddressesRequestPrivate(const AssignIpv6AddressesRequestPrivate &other,
                                   AssignIpv6AddressesRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssignIpv6AddressesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
