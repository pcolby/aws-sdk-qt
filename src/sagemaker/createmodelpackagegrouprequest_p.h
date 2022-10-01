// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMODELPACKAGEGROUPREQUEST_P_H
#define QTAWS_CREATEMODELPACKAGEGROUPREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "createmodelpackagegrouprequest.h"

namespace QtAws {
namespace SageMaker {

class CreateModelPackageGroupRequest;

class CreateModelPackageGroupRequestPrivate : public SageMakerRequestPrivate {

public:
    CreateModelPackageGroupRequestPrivate(const SageMakerRequest::Action action,
                                   CreateModelPackageGroupRequest * const q);
    CreateModelPackageGroupRequestPrivate(const CreateModelPackageGroupRequestPrivate &other,
                                   CreateModelPackageGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateModelPackageGroupRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
