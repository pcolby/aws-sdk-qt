// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIDENTITYIDFORMATREQUEST_P_H
#define QTAWS_DESCRIBEIDENTITYIDFORMATREQUEST_P_H

#include "ec2request_p.h"
#include "describeidentityidformatrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeIdentityIdFormatRequest;

class DescribeIdentityIdFormatRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeIdentityIdFormatRequestPrivate(const Ec2Request::Action action,
                                   DescribeIdentityIdFormatRequest * const q);
    DescribeIdentityIdFormatRequestPrivate(const DescribeIdentityIdFormatRequestPrivate &other,
                                   DescribeIdentityIdFormatRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeIdentityIdFormatRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
