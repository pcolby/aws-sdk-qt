// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONTEXTREQUEST_P_H
#define QTAWS_DESCRIBECONTEXTREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "describecontextrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeContextRequest;

class DescribeContextRequestPrivate : public SageMakerRequestPrivate {

public:
    DescribeContextRequestPrivate(const SageMakerRequest::Action action,
                                   DescribeContextRequest * const q);
    DescribeContextRequestPrivate(const DescribeContextRequestPrivate &other,
                                   DescribeContextRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeContextRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
