// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSERPOLICYREQUEST_P_H
#define QTAWS_GETUSERPOLICYREQUEST_P_H

#include "iamrequest_p.h"
#include "getuserpolicyrequest.h"

namespace QtAws {
namespace Iam {

class GetUserPolicyRequest;

class GetUserPolicyRequestPrivate : public IamRequestPrivate {

public:
    GetUserPolicyRequestPrivate(const IamRequest::Action action,
                                   GetUserPolicyRequest * const q);
    GetUserPolicyRequestPrivate(const GetUserPolicyRequestPrivate &other,
                                   GetUserPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetUserPolicyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
