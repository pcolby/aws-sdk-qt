// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMAGEVERSIONREQUEST_P_H
#define QTAWS_DESCRIBEIMAGEVERSIONREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "describeimageversionrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeImageVersionRequest;

class DescribeImageVersionRequestPrivate : public SageMakerRequestPrivate {

public:
    DescribeImageVersionRequestPrivate(const SageMakerRequest::Action action,
                                   DescribeImageVersionRequest * const q);
    DescribeImageVersionRequestPrivate(const DescribeImageVersionRequestPrivate &other,
                                   DescribeImageVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeImageVersionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
