// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMODELPACKAGEGROUPPOLICYREQUEST_P_H
#define QTAWS_DELETEMODELPACKAGEGROUPPOLICYREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "deletemodelpackagegrouppolicyrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteModelPackageGroupPolicyRequest;

class DeleteModelPackageGroupPolicyRequestPrivate : public SageMakerRequestPrivate {

public:
    DeleteModelPackageGroupPolicyRequestPrivate(const SageMakerRequest::Action action,
                                   DeleteModelPackageGroupPolicyRequest * const q);
    DeleteModelPackageGroupPolicyRequestPrivate(const DeleteModelPackageGroupPolicyRequestPrivate &other,
                                   DeleteModelPackageGroupPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteModelPackageGroupPolicyRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
