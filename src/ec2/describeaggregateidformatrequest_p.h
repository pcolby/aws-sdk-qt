// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAGGREGATEIDFORMATREQUEST_P_H
#define QTAWS_DESCRIBEAGGREGATEIDFORMATREQUEST_P_H

#include "ec2request_p.h"
#include "describeaggregateidformatrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeAggregateIdFormatRequest;

class DescribeAggregateIdFormatRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeAggregateIdFormatRequestPrivate(const Ec2Request::Action action,
                                   DescribeAggregateIdFormatRequest * const q);
    DescribeAggregateIdFormatRequestPrivate(const DescribeAggregateIdFormatRequestPrivate &other,
                                   DescribeAggregateIdFormatRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAggregateIdFormatRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
