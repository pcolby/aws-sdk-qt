// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTPASSWORDPOLICYREQUEST_P_H
#define QTAWS_GETACCOUNTPASSWORDPOLICYREQUEST_P_H

#include "iamrequest_p.h"
#include "getaccountpasswordpolicyrequest.h"

namespace QtAws {
namespace Iam {

class GetAccountPasswordPolicyRequest;

class GetAccountPasswordPolicyRequestPrivate : public IamRequestPrivate {

public:
    GetAccountPasswordPolicyRequestPrivate(const IamRequest::Action action,
                                   GetAccountPasswordPolicyRequest * const q);
    GetAccountPasswordPolicyRequestPrivate(const GetAccountPasswordPolicyRequestPrivate &other,
                                   GetAccountPasswordPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAccountPasswordPolicyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
