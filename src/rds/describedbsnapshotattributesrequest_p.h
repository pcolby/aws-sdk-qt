// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBSNAPSHOTATTRIBUTESREQUEST_P_H
#define QTAWS_DESCRIBEDBSNAPSHOTATTRIBUTESREQUEST_P_H

#include "rdsrequest_p.h"
#include "describedbsnapshotattributesrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBSnapshotAttributesRequest;

class DescribeDBSnapshotAttributesRequestPrivate : public RdsRequestPrivate {

public:
    DescribeDBSnapshotAttributesRequestPrivate(const RdsRequest::Action action,
                                   DescribeDBSnapshotAttributesRequest * const q);
    DescribeDBSnapshotAttributesRequestPrivate(const DescribeDBSnapshotAttributesRequestPrivate &other,
                                   DescribeDBSnapshotAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDBSnapshotAttributesRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
