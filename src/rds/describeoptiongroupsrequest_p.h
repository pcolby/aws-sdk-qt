// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOPTIONGROUPSREQUEST_P_H
#define QTAWS_DESCRIBEOPTIONGROUPSREQUEST_P_H

#include "rdsrequest_p.h"
#include "describeoptiongroupsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeOptionGroupsRequest;

class DescribeOptionGroupsRequestPrivate : public RdsRequestPrivate {

public:
    DescribeOptionGroupsRequestPrivate(const RdsRequest::Action action,
                                   DescribeOptionGroupsRequest * const q);
    DescribeOptionGroupsRequestPrivate(const DescribeOptionGroupsRequestPrivate &other,
                                   DescribeOptionGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeOptionGroupsRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
