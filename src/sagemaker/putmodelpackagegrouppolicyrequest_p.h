// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMODELPACKAGEGROUPPOLICYREQUEST_P_H
#define QTAWS_PUTMODELPACKAGEGROUPPOLICYREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "putmodelpackagegrouppolicyrequest.h"

namespace QtAws {
namespace SageMaker {

class PutModelPackageGroupPolicyRequest;

class PutModelPackageGroupPolicyRequestPrivate : public SageMakerRequestPrivate {

public:
    PutModelPackageGroupPolicyRequestPrivate(const SageMakerRequest::Action action,
                                   PutModelPackageGroupPolicyRequest * const q);
    PutModelPackageGroupPolicyRequestPrivate(const PutModelPackageGroupPolicyRequestPrivate &other,
                                   PutModelPackageGroupPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutModelPackageGroupPolicyRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
