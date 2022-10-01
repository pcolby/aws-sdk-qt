// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENOTEBOOKINSTANCELIFECYCLECONFIGREQUEST_P_H
#define QTAWS_DESCRIBENOTEBOOKINSTANCELIFECYCLECONFIGREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "describenotebookinstancelifecycleconfigrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeNotebookInstanceLifecycleConfigRequest;

class DescribeNotebookInstanceLifecycleConfigRequestPrivate : public SageMakerRequestPrivate {

public:
    DescribeNotebookInstanceLifecycleConfigRequestPrivate(const SageMakerRequest::Action action,
                                   DescribeNotebookInstanceLifecycleConfigRequest * const q);
    DescribeNotebookInstanceLifecycleConfigRequestPrivate(const DescribeNotebookInstanceLifecycleConfigRequestPrivate &other,
                                   DescribeNotebookInstanceLifecycleConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeNotebookInstanceLifecycleConfigRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
