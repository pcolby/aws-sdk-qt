// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPIMAGECONFIGREQUEST_P_H
#define QTAWS_DESCRIBEAPPIMAGECONFIGREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "describeappimageconfigrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeAppImageConfigRequest;

class DescribeAppImageConfigRequestPrivate : public SageMakerRequestPrivate {

public:
    DescribeAppImageConfigRequestPrivate(const SageMakerRequest::Action action,
                                   DescribeAppImageConfigRequest * const q);
    DescribeAppImageConfigRequestPrivate(const DescribeAppImageConfigRequestPrivate &other,
                                   DescribeAppImageConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAppImageConfigRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
