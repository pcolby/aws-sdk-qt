// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLINEAGEGROUPPOLICYREQUEST_P_H
#define QTAWS_GETLINEAGEGROUPPOLICYREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "getlineagegrouppolicyrequest.h"

namespace QtAws {
namespace SageMaker {

class GetLineageGroupPolicyRequest;

class GetLineageGroupPolicyRequestPrivate : public SageMakerRequestPrivate {

public:
    GetLineageGroupPolicyRequestPrivate(const SageMakerRequest::Action action,
                                   GetLineageGroupPolicyRequest * const q);
    GetLineageGroupPolicyRequestPrivate(const GetLineageGroupPolicyRequestPrivate &other,
                                   GetLineageGroupPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLineageGroupPolicyRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
