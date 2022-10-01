// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPREQUEST_P_H
#define QTAWS_DESCRIBEAPPREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "describeapprequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeAppRequest;

class DescribeAppRequestPrivate : public SageMakerRequestPrivate {

public:
    DescribeAppRequestPrivate(const SageMakerRequest::Action action,
                                   DescribeAppRequest * const q);
    DescribeAppRequestPrivate(const DescribeAppRequestPrivate &other,
                                   DescribeAppRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAppRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
