// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENOTEBOOKEXECUTIONREQUEST_P_H
#define QTAWS_DESCRIBENOTEBOOKEXECUTIONREQUEST_P_H

#include "emrrequest_p.h"
#include "describenotebookexecutionrequest.h"

namespace QtAws {
namespace Emr {

class DescribeNotebookExecutionRequest;

class DescribeNotebookExecutionRequestPrivate : public EmrRequestPrivate {

public:
    DescribeNotebookExecutionRequestPrivate(const EmrRequest::Action action,
                                   DescribeNotebookExecutionRequest * const q);
    DescribeNotebookExecutionRequestPrivate(const DescribeNotebookExecutionRequestPrivate &other,
                                   DescribeNotebookExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeNotebookExecutionRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
