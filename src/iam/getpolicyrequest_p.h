// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPOLICYREQUEST_P_H
#define QTAWS_GETPOLICYREQUEST_P_H

#include "iamrequest_p.h"
#include "getpolicyrequest.h"

namespace QtAws {
namespace Iam {

class GetPolicyRequest;

class GetPolicyRequestPrivate : public IamRequestPrivate {

public:
    GetPolicyRequestPrivate(const IamRequest::Action action,
                                   GetPolicyRequest * const q);
    GetPolicyRequestPrivate(const GetPolicyRequestPrivate &other,
                                   GetPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPolicyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
