// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROJECTREQUEST_P_H
#define QTAWS_DESCRIBEPROJECTREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "describeprojectrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeProjectRequest;

class DescribeProjectRequestPrivate : public SageMakerRequestPrivate {

public:
    DescribeProjectRequestPrivate(const SageMakerRequest::Action action,
                                   DescribeProjectRequest * const q);
    DescribeProjectRequestPrivate(const DescribeProjectRequestPrivate &other,
                                   DescribeProjectRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeProjectRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
