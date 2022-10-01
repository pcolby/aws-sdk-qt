// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMODELREQUEST_P_H
#define QTAWS_DESCRIBEMODELREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "describemodelrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeModelRequest;

class DescribeModelRequestPrivate : public SageMakerRequestPrivate {

public:
    DescribeModelRequestPrivate(const SageMakerRequest::Action action,
                                   DescribeModelRequest * const q);
    DescribeModelRequestPrivate(const DescribeModelRequestPrivate &other,
                                   DescribeModelRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeModelRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
