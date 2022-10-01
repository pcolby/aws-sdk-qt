// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMODELPACKAGINGJOBREQUEST_H
#define QTAWS_DESCRIBEMODELPACKAGINGJOBREQUEST_H

#include "lookoutvisionrequest.h"

namespace QtAws {
namespace LookoutVision {

class DescribeModelPackagingJobRequestPrivate;

class QTAWSLOOKOUTVISION_EXPORT DescribeModelPackagingJobRequest : public LookoutVisionRequest {

public:
    DescribeModelPackagingJobRequest(const DescribeModelPackagingJobRequest &other);
    DescribeModelPackagingJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeModelPackagingJobRequest)

};

} // namespace LookoutVision
} // namespace QtAws

#endif
