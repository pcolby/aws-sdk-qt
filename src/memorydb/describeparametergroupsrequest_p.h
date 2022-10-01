// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPARAMETERGROUPSREQUEST_P_H
#define QTAWS_DESCRIBEPARAMETERGROUPSREQUEST_P_H

#include "memorydbrequest_p.h"
#include "describeparametergroupsrequest.h"

namespace QtAws {
namespace MemoryDb {

class DescribeParameterGroupsRequest;

class DescribeParameterGroupsRequestPrivate : public MemoryDbRequestPrivate {

public:
    DescribeParameterGroupsRequestPrivate(const MemoryDbRequest::Action action,
                                   DescribeParameterGroupsRequest * const q);
    DescribeParameterGroupsRequestPrivate(const DescribeParameterGroupsRequestPrivate &other,
                                   DescribeParameterGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeParameterGroupsRequest)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
