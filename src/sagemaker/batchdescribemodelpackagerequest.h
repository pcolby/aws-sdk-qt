// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDESCRIBEMODELPACKAGEREQUEST_H
#define QTAWS_BATCHDESCRIBEMODELPACKAGEREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class BatchDescribeModelPackageRequestPrivate;

class QTAWSSAGEMAKER_EXPORT BatchDescribeModelPackageRequest : public SageMakerRequest {

public:
    BatchDescribeModelPackageRequest(const BatchDescribeModelPackageRequest &other);
    BatchDescribeModelPackageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDescribeModelPackageRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
