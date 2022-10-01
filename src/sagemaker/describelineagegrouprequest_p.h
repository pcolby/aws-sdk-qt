// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELINEAGEGROUPREQUEST_P_H
#define QTAWS_DESCRIBELINEAGEGROUPREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "describelineagegrouprequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeLineageGroupRequest;

class DescribeLineageGroupRequestPrivate : public SageMakerRequestPrivate {

public:
    DescribeLineageGroupRequestPrivate(const SageMakerRequest::Action action,
                                   DescribeLineageGroupRequest * const q);
    DescribeLineageGroupRequestPrivate(const DescribeLineageGroupRequestPrivate &other,
                                   DescribeLineageGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLineageGroupRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
