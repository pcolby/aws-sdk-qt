// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMODELPACKAGEREQUEST_P_H
#define QTAWS_UPDATEMODELPACKAGEREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "updatemodelpackagerequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateModelPackageRequest;

class UpdateModelPackageRequestPrivate : public SageMakerRequestPrivate {

public:
    UpdateModelPackageRequestPrivate(const SageMakerRequest::Action action,
                                   UpdateModelPackageRequest * const q);
    UpdateModelPackageRequestPrivate(const UpdateModelPackageRequestPrivate &other,
                                   UpdateModelPackageRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateModelPackageRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
