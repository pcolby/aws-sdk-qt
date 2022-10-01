// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMODELPACKAGEREQUEST_P_H
#define QTAWS_DESCRIBEMODELPACKAGEREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "describemodelpackagerequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeModelPackageRequest;

class DescribeModelPackageRequestPrivate : public SageMakerRequestPrivate {

public:
    DescribeModelPackageRequestPrivate(const SageMakerRequest::Action action,
                                   DescribeModelPackageRequest * const q);
    DescribeModelPackageRequestPrivate(const DescribeModelPackageRequestPrivate &other,
                                   DescribeModelPackageRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeModelPackageRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
