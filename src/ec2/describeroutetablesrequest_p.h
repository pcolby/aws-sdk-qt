// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEROUTETABLESREQUEST_P_H
#define QTAWS_DESCRIBEROUTETABLESREQUEST_P_H

#include "ec2request_p.h"
#include "describeroutetablesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeRouteTablesRequest;

class DescribeRouteTablesRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeRouteTablesRequestPrivate(const Ec2Request::Action action,
                                   DescribeRouteTablesRequest * const q);
    DescribeRouteTablesRequestPrivate(const DescribeRouteTablesRequestPrivate &other,
                                   DescribeRouteTablesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRouteTablesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
