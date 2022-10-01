// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETDEFAULTPOLICYVERSIONREQUEST_P_H
#define QTAWS_SETDEFAULTPOLICYVERSIONREQUEST_P_H

#include "iamrequest_p.h"
#include "setdefaultpolicyversionrequest.h"

namespace QtAws {
namespace Iam {

class SetDefaultPolicyVersionRequest;

class SetDefaultPolicyVersionRequestPrivate : public IamRequestPrivate {

public:
    SetDefaultPolicyVersionRequestPrivate(const IamRequest::Action action,
                                   SetDefaultPolicyVersionRequest * const q);
    SetDefaultPolicyVersionRequestPrivate(const SetDefaultPolicyVersionRequestPrivate &other,
                                   SetDefaultPolicyVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetDefaultPolicyVersionRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
