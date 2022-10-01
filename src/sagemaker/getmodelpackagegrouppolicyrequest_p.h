// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMODELPACKAGEGROUPPOLICYREQUEST_P_H
#define QTAWS_GETMODELPACKAGEGROUPPOLICYREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "getmodelpackagegrouppolicyrequest.h"

namespace QtAws {
namespace SageMaker {

class GetModelPackageGroupPolicyRequest;

class GetModelPackageGroupPolicyRequestPrivate : public SageMakerRequestPrivate {

public:
    GetModelPackageGroupPolicyRequestPrivate(const SageMakerRequest::Action action,
                                   GetModelPackageGroupPolicyRequest * const q);
    GetModelPackageGroupPolicyRequestPrivate(const GetModelPackageGroupPolicyRequestPrivate &other,
                                   GetModelPackageGroupPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetModelPackageGroupPolicyRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
