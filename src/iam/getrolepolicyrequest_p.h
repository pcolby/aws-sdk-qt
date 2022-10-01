// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETROLEPOLICYREQUEST_P_H
#define QTAWS_GETROLEPOLICYREQUEST_P_H

#include "iamrequest_p.h"
#include "getrolepolicyrequest.h"

namespace QtAws {
namespace Iam {

class GetRolePolicyRequest;

class GetRolePolicyRequestPrivate : public IamRequestPrivate {

public:
    GetRolePolicyRequestPrivate(const IamRequest::Action action,
                                   GetRolePolicyRequest * const q);
    GetRolePolicyRequestPrivate(const GetRolePolicyRequestPrivate &other,
                                   GetRolePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRolePolicyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
