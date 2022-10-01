// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCOUNTPASSWORDPOLICYREQUEST_P_H
#define QTAWS_UPDATEACCOUNTPASSWORDPOLICYREQUEST_P_H

#include "iamrequest_p.h"
#include "updateaccountpasswordpolicyrequest.h"

namespace QtAws {
namespace Iam {

class UpdateAccountPasswordPolicyRequest;

class UpdateAccountPasswordPolicyRequestPrivate : public IamRequestPrivate {

public:
    UpdateAccountPasswordPolicyRequestPrivate(const IamRequest::Action action,
                                   UpdateAccountPasswordPolicyRequest * const q);
    UpdateAccountPasswordPolicyRequestPrivate(const UpdateAccountPasswordPolicyRequestPrivate &other,
                                   UpdateAccountPasswordPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAccountPasswordPolicyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
