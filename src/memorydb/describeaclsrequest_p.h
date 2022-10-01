// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACLSREQUEST_P_H
#define QTAWS_DESCRIBEACLSREQUEST_P_H

#include "memorydbrequest_p.h"
#include "describeaclsrequest.h"

namespace QtAws {
namespace MemoryDb {

class DescribeACLsRequest;

class DescribeACLsRequestPrivate : public MemoryDbRequestPrivate {

public:
    DescribeACLsRequestPrivate(const MemoryDbRequest::Action action,
                                   DescribeACLsRequest * const q);
    DescribeACLsRequestPrivate(const DescribeACLsRequestPrivate &other,
                                   DescribeACLsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeACLsRequest)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
