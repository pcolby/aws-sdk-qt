// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMODELPACKAGEGROUPREQUEST_P_H
#define QTAWS_DESCRIBEMODELPACKAGEGROUPREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "describemodelpackagegrouprequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeModelPackageGroupRequest;

class DescribeModelPackageGroupRequestPrivate : public SageMakerRequestPrivate {

public:
    DescribeModelPackageGroupRequestPrivate(const SageMakerRequest::Action action,
                                   DescribeModelPackageGroupRequest * const q);
    DescribeModelPackageGroupRequestPrivate(const DescribeModelPackageGroupRequestPrivate &other,
                                   DescribeModelPackageGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeModelPackageGroupRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
