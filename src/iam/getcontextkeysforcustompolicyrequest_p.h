// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTEXTKEYSFORCUSTOMPOLICYREQUEST_P_H
#define QTAWS_GETCONTEXTKEYSFORCUSTOMPOLICYREQUEST_P_H

#include "iamrequest_p.h"
#include "getcontextkeysforcustompolicyrequest.h"

namespace QtAws {
namespace Iam {

class GetContextKeysForCustomPolicyRequest;

class GetContextKeysForCustomPolicyRequestPrivate : public IamRequestPrivate {

public:
    GetContextKeysForCustomPolicyRequestPrivate(const IamRequest::Action action,
                                   GetContextKeysForCustomPolicyRequest * const q);
    GetContextKeysForCustomPolicyRequestPrivate(const GetContextKeysForCustomPolicyRequestPrivate &other,
                                   GetContextKeysForCustomPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetContextKeysForCustomPolicyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
