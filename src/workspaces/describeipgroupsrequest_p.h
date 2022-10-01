// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIPGROUPSREQUEST_P_H
#define QTAWS_DESCRIBEIPGROUPSREQUEST_P_H

#include "workspacesrequest_p.h"
#include "describeipgroupsrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeIpGroupsRequest;

class DescribeIpGroupsRequestPrivate : public WorkSpacesRequestPrivate {

public:
    DescribeIpGroupsRequestPrivate(const WorkSpacesRequest::Action action,
                                   DescribeIpGroupsRequest * const q);
    DescribeIpGroupsRequestPrivate(const DescribeIpGroupsRequestPrivate &other,
                                   DescribeIpGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeIpGroupsRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
