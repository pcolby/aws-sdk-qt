// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGROUPPOLICYREQUEST_P_H
#define QTAWS_GETGROUPPOLICYREQUEST_P_H

#include "iamrequest_p.h"
#include "getgrouppolicyrequest.h"

namespace QtAws {
namespace Iam {

class GetGroupPolicyRequest;

class GetGroupPolicyRequestPrivate : public IamRequestPrivate {

public:
    GetGroupPolicyRequestPrivate(const IamRequest::Action action,
                                   GetGroupPolicyRequest * const q);
    GetGroupPolicyRequestPrivate(const GetGroupPolicyRequestPrivate &other,
                                   GetGroupPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetGroupPolicyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
