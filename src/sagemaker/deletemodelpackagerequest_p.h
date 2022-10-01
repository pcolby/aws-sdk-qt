// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMODELPACKAGEREQUEST_P_H
#define QTAWS_DELETEMODELPACKAGEREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "deletemodelpackagerequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteModelPackageRequest;

class DeleteModelPackageRequestPrivate : public SageMakerRequestPrivate {

public:
    DeleteModelPackageRequestPrivate(const SageMakerRequest::Action action,
                                   DeleteModelPackageRequest * const q);
    DeleteModelPackageRequestPrivate(const DeleteModelPackageRequestPrivate &other,
                                   DeleteModelPackageRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteModelPackageRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
