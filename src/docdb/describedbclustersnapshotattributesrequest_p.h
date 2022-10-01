// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBCLUSTERSNAPSHOTATTRIBUTESREQUEST_P_H
#define QTAWS_DESCRIBEDBCLUSTERSNAPSHOTATTRIBUTESREQUEST_P_H

#include "docdbrequest_p.h"
#include "describedbclustersnapshotattributesrequest.h"

namespace QtAws {
namespace DocDb {

class DescribeDBClusterSnapshotAttributesRequest;

class DescribeDBClusterSnapshotAttributesRequestPrivate : public DocDbRequestPrivate {

public:
    DescribeDBClusterSnapshotAttributesRequestPrivate(const DocDbRequest::Action action,
                                   DescribeDBClusterSnapshotAttributesRequest * const q);
    DescribeDBClusterSnapshotAttributesRequestPrivate(const DescribeDBClusterSnapshotAttributesRequestPrivate &other,
                                   DescribeDBClusterSnapshotAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDBClusterSnapshotAttributesRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
