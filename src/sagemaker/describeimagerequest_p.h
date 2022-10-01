// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMAGEREQUEST_P_H
#define QTAWS_DESCRIBEIMAGEREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "describeimagerequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeImageRequest;

class DescribeImageRequestPrivate : public SageMakerRequestPrivate {

public:
    DescribeImageRequestPrivate(const SageMakerRequest::Action action,
                                   DescribeImageRequest * const q);
    DescribeImageRequestPrivate(const DescribeImageRequestPrivate &other,
                                   DescribeImageRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeImageRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
