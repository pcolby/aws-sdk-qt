// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENOTEBOOKINSTANCEREQUEST_P_H
#define QTAWS_DESCRIBENOTEBOOKINSTANCEREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "describenotebookinstancerequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeNotebookInstanceRequest;

class DescribeNotebookInstanceRequestPrivate : public SageMakerRequestPrivate {

public:
    DescribeNotebookInstanceRequestPrivate(const SageMakerRequest::Action action,
                                   DescribeNotebookInstanceRequest * const q);
    DescribeNotebookInstanceRequestPrivate(const DescribeNotebookInstanceRequestPrivate &other,
                                   DescribeNotebookInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeNotebookInstanceRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
