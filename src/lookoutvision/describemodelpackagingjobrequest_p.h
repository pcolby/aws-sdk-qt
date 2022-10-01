// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMODELPACKAGINGJOBREQUEST_P_H
#define QTAWS_DESCRIBEMODELPACKAGINGJOBREQUEST_P_H

#include "lookoutvisionrequest_p.h"
#include "describemodelpackagingjobrequest.h"

namespace QtAws {
namespace LookoutVision {

class DescribeModelPackagingJobRequest;

class DescribeModelPackagingJobRequestPrivate : public LookoutVisionRequestPrivate {

public:
    DescribeModelPackagingJobRequestPrivate(const LookoutVisionRequest::Action action,
                                   DescribeModelPackagingJobRequest * const q);
    DescribeModelPackagingJobRequestPrivate(const DescribeModelPackagingJobRequestPrivate &other,
                                   DescribeModelPackagingJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeModelPackagingJobRequest)

};

} // namespace LookoutVision
} // namespace QtAws

#endif
