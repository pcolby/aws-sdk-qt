// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENDPOINTSREQUEST_P_H
#define QTAWS_DESCRIBEENDPOINTSREQUEST_P_H

#include "timestreamqueryrequest_p.h"
#include "describeendpointsrequest.h"

namespace QtAws {
namespace TimestreamQuery {

class DescribeEndpointsRequest;

class DescribeEndpointsRequestPrivate : public TimestreamQueryRequestPrivate {

public:
    DescribeEndpointsRequestPrivate(const TimestreamQueryRequest::Action action,
                                   DescribeEndpointsRequest * const q);
    DescribeEndpointsRequestPrivate(const DescribeEndpointsRequestPrivate &other,
                                   DescribeEndpointsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEndpointsRequest)

};

} // namespace TimestreamQuery
} // namespace QtAws

#endif
