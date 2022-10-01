// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVOLUMESREQUEST_P_H
#define QTAWS_DESCRIBEVOLUMESREQUEST_P_H

#include "ec2request_p.h"
#include "describevolumesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeVolumesRequest;

class DescribeVolumesRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeVolumesRequestPrivate(const Ec2Request::Action action,
                                   DescribeVolumesRequest * const q);
    DescribeVolumesRequestPrivate(const DescribeVolumesRequestPrivate &other,
                                   DescribeVolumesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeVolumesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
