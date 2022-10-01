// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMPORTTASKSREQUEST_P_H
#define QTAWS_DESCRIBEIMPORTTASKSREQUEST_P_H

#include "applicationdiscoveryrequest_p.h"
#include "describeimporttasksrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class DescribeImportTasksRequest;

class DescribeImportTasksRequestPrivate : public ApplicationDiscoveryRequestPrivate {

public:
    DescribeImportTasksRequestPrivate(const ApplicationDiscoveryRequest::Action action,
                                   DescribeImportTasksRequest * const q);
    DescribeImportTasksRequestPrivate(const DescribeImportTasksRequestPrivate &other,
                                   DescribeImportTasksRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeImportTasksRequest)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
