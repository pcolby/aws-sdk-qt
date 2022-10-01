// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETSTACKPOLICYREQUEST_P_H
#define QTAWS_SETSTACKPOLICYREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "setstackpolicyrequest.h"

namespace QtAws {
namespace CloudFormation {

class SetStackPolicyRequest;

class SetStackPolicyRequestPrivate : public CloudFormationRequestPrivate {

public:
    SetStackPolicyRequestPrivate(const CloudFormationRequest::Action action,
                                   SetStackPolicyRequest * const q);
    SetStackPolicyRequestPrivate(const SetStackPolicyRequestPrivate &other,
                                   SetStackPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetStackPolicyRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
