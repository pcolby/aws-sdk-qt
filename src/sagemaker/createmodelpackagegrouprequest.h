// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMODELPACKAGEGROUPREQUEST_H
#define QTAWS_CREATEMODELPACKAGEGROUPREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateModelPackageGroupRequestPrivate;

class QTAWSSAGEMAKER_EXPORT CreateModelPackageGroupRequest : public SageMakerRequest {

public:
    CreateModelPackageGroupRequest(const CreateModelPackageGroupRequest &other);
    CreateModelPackageGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateModelPackageGroupRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
