// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUTOMLJOBREQUEST_P_H
#define QTAWS_DESCRIBEAUTOMLJOBREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "describeautomljobrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeAutoMLJobRequest;

class DescribeAutoMLJobRequestPrivate : public SageMakerRequestPrivate {

public:
    DescribeAutoMLJobRequestPrivate(const SageMakerRequest::Action action,
                                   DescribeAutoMLJobRequest * const q);
    DescribeAutoMLJobRequestPrivate(const DescribeAutoMLJobRequestPrivate &other,
                                   DescribeAutoMLJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAutoMLJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
