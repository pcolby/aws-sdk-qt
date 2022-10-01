// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERHIERARCHYGROUPREQUEST_P_H
#define QTAWS_DESCRIBEUSERHIERARCHYGROUPREQUEST_P_H

#include "connectrequest_p.h"
#include "describeuserhierarchygrouprequest.h"

namespace QtAws {
namespace Connect {

class DescribeUserHierarchyGroupRequest;

class DescribeUserHierarchyGroupRequestPrivate : public ConnectRequestPrivate {

public:
    DescribeUserHierarchyGroupRequestPrivate(const ConnectRequest::Action action,
                                   DescribeUserHierarchyGroupRequest * const q);
    DescribeUserHierarchyGroupRequestPrivate(const DescribeUserHierarchyGroupRequestPrivate &other,
                                   DescribeUserHierarchyGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeUserHierarchyGroupRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
