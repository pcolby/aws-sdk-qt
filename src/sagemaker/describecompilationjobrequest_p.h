// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOMPILATIONJOBREQUEST_P_H
#define QTAWS_DESCRIBECOMPILATIONJOBREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "describecompilationjobrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeCompilationJobRequest;

class DescribeCompilationJobRequestPrivate : public SageMakerRequestPrivate {

public:
    DescribeCompilationJobRequestPrivate(const SageMakerRequest::Action action,
                                   DescribeCompilationJobRequest * const q);
    DescribeCompilationJobRequestPrivate(const DescribeCompilationJobRequestPrivate &other,
                                   DescribeCompilationJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCompilationJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
