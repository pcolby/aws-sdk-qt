// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESUBNETSREQUEST_P_H
#define QTAWS_DESCRIBESUBNETSREQUEST_P_H

#include "ec2request_p.h"
#include "describesubnetsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeSubnetsRequest;

class DescribeSubnetsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeSubnetsRequestPrivate(const Ec2Request::Action action,
                                   DescribeSubnetsRequest * const q);
    DescribeSubnetsRequestPrivate(const DescribeSubnetsRequestPrivate &other,
                                   DescribeSubnetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSubnetsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
