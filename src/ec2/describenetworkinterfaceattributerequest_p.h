// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENETWORKINTERFACEATTRIBUTEREQUEST_P_H
#define QTAWS_DESCRIBENETWORKINTERFACEATTRIBUTEREQUEST_P_H

#include "ec2request_p.h"
#include "describenetworkinterfaceattributerequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeNetworkInterfaceAttributeRequest;

class DescribeNetworkInterfaceAttributeRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeNetworkInterfaceAttributeRequestPrivate(const Ec2Request::Action action,
                                   DescribeNetworkInterfaceAttributeRequest * const q);
    DescribeNetworkInterfaceAttributeRequestPrivate(const DescribeNetworkInterfaceAttributeRequestPrivate &other,
                                   DescribeNetworkInterfaceAttributeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeNetworkInterfaceAttributeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
