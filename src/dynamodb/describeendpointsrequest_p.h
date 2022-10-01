// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENDPOINTSREQUEST_P_H
#define QTAWS_DESCRIBEENDPOINTSREQUEST_P_H

#include "dynamodbrequest_p.h"
#include "describeendpointsrequest.h"

namespace QtAws {
namespace DynamoDb {

class DescribeEndpointsRequest;

class DescribeEndpointsRequestPrivate : public DynamoDbRequestPrivate {

public:
    DescribeEndpointsRequestPrivate(const DynamoDbRequest::Action action,
                                   DescribeEndpointsRequest * const q);
    DescribeEndpointsRequestPrivate(const DescribeEndpointsRequestPrivate &other,
                                   DescribeEndpointsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEndpointsRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
