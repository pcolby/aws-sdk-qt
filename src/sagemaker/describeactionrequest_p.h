// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACTIONREQUEST_P_H
#define QTAWS_DESCRIBEACTIONREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "describeactionrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeActionRequest;

class DescribeActionRequestPrivate : public SageMakerRequestPrivate {

public:
    DescribeActionRequestPrivate(const SageMakerRequest::Action action,
                                   DescribeActionRequest * const q);
    DescribeActionRequestPrivate(const DescribeActionRequestPrivate &other,
                                   DescribeActionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeActionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
