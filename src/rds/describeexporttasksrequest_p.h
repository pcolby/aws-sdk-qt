// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXPORTTASKSREQUEST_P_H
#define QTAWS_DESCRIBEEXPORTTASKSREQUEST_P_H

#include "rdsrequest_p.h"
#include "describeexporttasksrequest.h"

namespace QtAws {
namespace Rds {

class DescribeExportTasksRequest;

class DescribeExportTasksRequestPrivate : public RdsRequestPrivate {

public:
    DescribeExportTasksRequestPrivate(const RdsRequest::Action action,
                                   DescribeExportTasksRequest * const q);
    DescribeExportTasksRequestPrivate(const DescribeExportTasksRequestPrivate &other,
                                   DescribeExportTasksRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeExportTasksRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
