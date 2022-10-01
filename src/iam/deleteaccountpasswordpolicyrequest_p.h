// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCOUNTPASSWORDPOLICYREQUEST_P_H
#define QTAWS_DELETEACCOUNTPASSWORDPOLICYREQUEST_P_H

#include "iamrequest_p.h"
#include "deleteaccountpasswordpolicyrequest.h"

namespace QtAws {
namespace Iam {

class DeleteAccountPasswordPolicyRequest;

class DeleteAccountPasswordPolicyRequestPrivate : public IamRequestPrivate {

public:
    DeleteAccountPasswordPolicyRequestPrivate(const IamRequest::Action action,
                                   DeleteAccountPasswordPolicyRequest * const q);
    DeleteAccountPasswordPolicyRequestPrivate(const DeleteAccountPasswordPolicyRequestPrivate &other,
                                   DeleteAccountPasswordPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAccountPasswordPolicyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
