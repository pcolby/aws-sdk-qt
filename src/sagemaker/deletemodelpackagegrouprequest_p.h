// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMODELPACKAGEGROUPREQUEST_P_H
#define QTAWS_DELETEMODELPACKAGEGROUPREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "deletemodelpackagegrouprequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteModelPackageGroupRequest;

class DeleteModelPackageGroupRequestPrivate : public SageMakerRequestPrivate {

public:
    DeleteModelPackageGroupRequestPrivate(const SageMakerRequest::Action action,
                                   DeleteModelPackageGroupRequest * const q);
    DeleteModelPackageGroupRequestPrivate(const DeleteModelPackageGroupRequestPrivate &other,
                                   DeleteModelPackageGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteModelPackageGroupRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
