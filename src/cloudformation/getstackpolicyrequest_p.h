// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTACKPOLICYREQUEST_P_H
#define QTAWS_GETSTACKPOLICYREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "getstackpolicyrequest.h"

namespace QtAws {
namespace CloudFormation {

class GetStackPolicyRequest;

class GetStackPolicyRequestPrivate : public CloudFormationRequestPrivate {

public:
    GetStackPolicyRequestPrivate(const CloudFormationRequest::Action action,
                                   GetStackPolicyRequest * const q);
    GetStackPolicyRequestPrivate(const GetStackPolicyRequestPrivate &other,
                                   GetStackPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetStackPolicyRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
