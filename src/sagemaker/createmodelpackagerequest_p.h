// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMODELPACKAGEREQUEST_P_H
#define QTAWS_CREATEMODELPACKAGEREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "createmodelpackagerequest.h"

namespace QtAws {
namespace SageMaker {

class CreateModelPackageRequest;

class CreateModelPackageRequestPrivate : public SageMakerRequestPrivate {

public:
    CreateModelPackageRequestPrivate(const SageMakerRequest::Action action,
                                   CreateModelPackageRequest * const q);
    CreateModelPackageRequestPrivate(const CreateModelPackageRequestPrivate &other,
                                   CreateModelPackageRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateModelPackageRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
