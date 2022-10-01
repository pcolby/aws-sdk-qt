// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENETWORKINTERFACESREQUEST_P_H
#define QTAWS_DESCRIBENETWORKINTERFACESREQUEST_P_H

#include "ec2request_p.h"
#include "describenetworkinterfacesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeNetworkInterfacesRequest;

class DescribeNetworkInterfacesRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeNetworkInterfacesRequestPrivate(const Ec2Request::Action action,
                                   DescribeNetworkInterfacesRequest * const q);
    DescribeNetworkInterfacesRequestPrivate(const DescribeNetworkInterfacesRequestPrivate &other,
                                   DescribeNetworkInterfacesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeNetworkInterfacesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
