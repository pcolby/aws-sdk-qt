// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMODELPACKAGEREQUEST_H
#define QTAWS_CREATEMODELPACKAGEREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateModelPackageRequestPrivate;

class QTAWSSAGEMAKER_EXPORT CreateModelPackageRequest : public SageMakerRequest {

public:
    CreateModelPackageRequest(const CreateModelPackageRequest &other);
    CreateModelPackageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateModelPackageRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
