// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMODELPACKAGEGROUPREQUEST_H
#define QTAWS_DESCRIBEMODELPACKAGEGROUPREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeModelPackageGroupRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DescribeModelPackageGroupRequest : public SageMakerRequest {

public:
    DescribeModelPackageGroupRequest(const DescribeModelPackageGroupRequest &other);
    DescribeModelPackageGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeModelPackageGroupRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
