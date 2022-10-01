// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMPORTSNAPSHOTTASKSREQUEST_P_H
#define QTAWS_DESCRIBEIMPORTSNAPSHOTTASKSREQUEST_P_H

#include "ec2request_p.h"
#include "describeimportsnapshottasksrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeImportSnapshotTasksRequest;

class DescribeImportSnapshotTasksRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeImportSnapshotTasksRequestPrivate(const Ec2Request::Action action,
                                   DescribeImportSnapshotTasksRequest * const q);
    DescribeImportSnapshotTasksRequestPrivate(const DescribeImportSnapshotTasksRequestPrivate &other,
                                   DescribeImportSnapshotTasksRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeImportSnapshotTasksRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
