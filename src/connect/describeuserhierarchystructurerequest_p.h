// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERHIERARCHYSTRUCTUREREQUEST_P_H
#define QTAWS_DESCRIBEUSERHIERARCHYSTRUCTUREREQUEST_P_H

#include "connectrequest_p.h"
#include "describeuserhierarchystructurerequest.h"

namespace QtAws {
namespace Connect {

class DescribeUserHierarchyStructureRequest;

class DescribeUserHierarchyStructureRequestPrivate : public ConnectRequestPrivate {

public:
    DescribeUserHierarchyStructureRequestPrivate(const ConnectRequest::Action action,
                                   DescribeUserHierarchyStructureRequest * const q);
    DescribeUserHierarchyStructureRequestPrivate(const DescribeUserHierarchyStructureRequestPrivate &other,
                                   DescribeUserHierarchyStructureRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeUserHierarchyStructureRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
