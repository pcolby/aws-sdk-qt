// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIDENTITYPOLICIESREQUEST_P_H
#define QTAWS_GETIDENTITYPOLICIESREQUEST_P_H

#include "sesrequest_p.h"
#include "getidentitypoliciesrequest.h"

namespace QtAws {
namespace Ses {

class GetIdentityPoliciesRequest;

class GetIdentityPoliciesRequestPrivate : public SesRequestPrivate {

public:
    GetIdentityPoliciesRequestPrivate(const SesRequest::Action action,
                                   GetIdentityPoliciesRequest * const q);
    GetIdentityPoliciesRequestPrivate(const GetIdentityPoliciesRequestPrivate &other,
                                   GetIdentityPoliciesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetIdentityPoliciesRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
