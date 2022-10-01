// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSIGNPRIVATEIPADDRESSESREQUEST_P_H
#define QTAWS_ASSIGNPRIVATEIPADDRESSESREQUEST_P_H

#include "ec2request_p.h"
#include "assignprivateipaddressesrequest.h"

namespace QtAws {
namespace Ec2 {

class AssignPrivateIpAddressesRequest;

class AssignPrivateIpAddressesRequestPrivate : public Ec2RequestPrivate {

public:
    AssignPrivateIpAddressesRequestPrivate(const Ec2Request::Action action,
                                   AssignPrivateIpAddressesRequest * const q);
    AssignPrivateIpAddressesRequestPrivate(const AssignPrivateIpAddressesRequestPrivate &other,
                                   AssignPrivateIpAddressesRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssignPrivateIpAddressesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
