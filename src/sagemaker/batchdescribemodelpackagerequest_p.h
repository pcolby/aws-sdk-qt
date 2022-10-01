// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDESCRIBEMODELPACKAGEREQUEST_P_H
#define QTAWS_BATCHDESCRIBEMODELPACKAGEREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "batchdescribemodelpackagerequest.h"

namespace QtAws {
namespace SageMaker {

class BatchDescribeModelPackageRequest;

class BatchDescribeModelPackageRequestPrivate : public SageMakerRequestPrivate {

public:
    BatchDescribeModelPackageRequestPrivate(const SageMakerRequest::Action action,
                                   BatchDescribeModelPackageRequest * const q);
    BatchDescribeModelPackageRequestPrivate(const BatchDescribeModelPackageRequestPrivate &other,
                                   BatchDescribeModelPackageRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchDescribeModelPackageRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
