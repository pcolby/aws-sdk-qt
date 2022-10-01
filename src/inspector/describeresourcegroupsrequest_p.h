// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESOURCEGROUPSREQUEST_P_H
#define QTAWS_DESCRIBERESOURCEGROUPSREQUEST_P_H

#include "inspectorrequest_p.h"
#include "describeresourcegroupsrequest.h"

namespace QtAws {
namespace Inspector {

class DescribeResourceGroupsRequest;

class DescribeResourceGroupsRequestPrivate : public InspectorRequestPrivate {

public:
    DescribeResourceGroupsRequestPrivate(const InspectorRequest::Action action,
                                   DescribeResourceGroupsRequest * const q);
    DescribeResourceGroupsRequestPrivate(const DescribeResourceGroupsRequestPrivate &other,
                                   DescribeResourceGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeResourceGroupsRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
