// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXPORTTASKSREQUEST_P_H
#define QTAWS_DESCRIBEEXPORTTASKSREQUEST_P_H

#include "ec2request_p.h"
#include "describeexporttasksrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeExportTasksRequest;

class DescribeExportTasksRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeExportTasksRequestPrivate(const Ec2Request::Action action,
                                   DescribeExportTasksRequest * const q);
    DescribeExportTasksRequestPrivate(const DescribeExportTasksRequestPrivate &other,
                                   DescribeExportTasksRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeExportTasksRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
