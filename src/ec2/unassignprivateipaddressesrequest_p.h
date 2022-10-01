// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNASSIGNPRIVATEIPADDRESSESREQUEST_P_H
#define QTAWS_UNASSIGNPRIVATEIPADDRESSESREQUEST_P_H

#include "ec2request_p.h"
#include "unassignprivateipaddressesrequest.h"

namespace QtAws {
namespace Ec2 {

class UnassignPrivateIpAddressesRequest;

class UnassignPrivateIpAddressesRequestPrivate : public Ec2RequestPrivate {

public:
    UnassignPrivateIpAddressesRequestPrivate(const Ec2Request::Action action,
                                   UnassignPrivateIpAddressesRequest * const q);
    UnassignPrivateIpAddressesRequestPrivate(const UnassignPrivateIpAddressesRequestPrivate &other,
                                   UnassignPrivateIpAddressesRequest * const q);

private:
    Q_DECLARE_PUBLIC(UnassignPrivateIpAddressesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
