// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENETWORKINTERFACEPERMISSIONSREQUEST_P_H
#define QTAWS_DESCRIBENETWORKINTERFACEPERMISSIONSREQUEST_P_H

#include "ec2request_p.h"
#include "describenetworkinterfacepermissionsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeNetworkInterfacePermissionsRequest;

class DescribeNetworkInterfacePermissionsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeNetworkInterfacePermissionsRequestPrivate(const Ec2Request::Action action,
                                   DescribeNetworkInterfacePermissionsRequest * const q);
    DescribeNetworkInterfacePermissionsRequestPrivate(const DescribeNetworkInterfacePermissionsRequestPrivate &other,
                                   DescribeNetworkInterfacePermissionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeNetworkInterfacePermissionsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
