/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_ASSIGNIPV6ADDRESSESREQUEST_P_H
#define QTAWS_ASSIGNIPV6ADDRESSESREQUEST_P_H

#include "ec2request_p.h"
#include "assignipv6addressesrequest.h"

namespace QtAws {
namespace EC2 {

class AssignIpv6AddressesRequest;

class QTAWS_EXPORT AssignIpv6AddressesRequestPrivate : public Ec2RequestPrivate {

public:
    AssignIpv6AddressesRequestPrivate(const Ec2Request::Action action,
                                   AssignIpv6AddressesRequest * const q);
    AssignIpv6AddressesRequestPrivate(const AssignIpv6AddressesRequestPrivate &other,
                                   AssignIpv6AddressesRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssignIpv6AddressesRequest)

};

} // namespace EC2
} // namespace QtAws

#endif
