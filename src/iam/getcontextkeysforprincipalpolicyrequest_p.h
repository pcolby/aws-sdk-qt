// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTEXTKEYSFORPRINCIPALPOLICYREQUEST_P_H
#define QTAWS_GETCONTEXTKEYSFORPRINCIPALPOLICYREQUEST_P_H

#include "iamrequest_p.h"
#include "getcontextkeysforprincipalpolicyrequest.h"

namespace QtAws {
namespace Iam {

class GetContextKeysForPrincipalPolicyRequest;

class GetContextKeysForPrincipalPolicyRequestPrivate : public IamRequestPrivate {

public:
    GetContextKeysForPrincipalPolicyRequestPrivate(const IamRequest::Action action,
                                   GetContextKeysForPrincipalPolicyRequest * const q);
    GetContextKeysForPrincipalPolicyRequestPrivate(const GetContextKeysForPrincipalPolicyRequestPrivate &other,
                                   GetContextKeysForPrincipalPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetContextKeysForPrincipalPolicyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
