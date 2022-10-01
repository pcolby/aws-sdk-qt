// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTUDIOLIFECYCLECONFIGREQUEST_P_H
#define QTAWS_DESCRIBESTUDIOLIFECYCLECONFIGREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "describestudiolifecycleconfigrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeStudioLifecycleConfigRequest;

class DescribeStudioLifecycleConfigRequestPrivate : public SageMakerRequestPrivate {

public:
    DescribeStudioLifecycleConfigRequestPrivate(const SageMakerRequest::Action action,
                                   DescribeStudioLifecycleConfigRequest * const q);
    DescribeStudioLifecycleConfigRequestPrivate(const DescribeStudioLifecycleConfigRequestPrivate &other,
                                   DescribeStudioLifecycleConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeStudioLifecycleConfigRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
