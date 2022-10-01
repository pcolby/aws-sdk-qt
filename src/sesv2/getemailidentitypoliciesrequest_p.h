// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEMAILIDENTITYPOLICIESREQUEST_P_H
#define QTAWS_GETEMAILIDENTITYPOLICIESREQUEST_P_H

#include "sesv2request_p.h"
#include "getemailidentitypoliciesrequest.h"

namespace QtAws {
namespace SESv2 {

class GetEmailIdentityPoliciesRequest;

class GetEmailIdentityPoliciesRequestPrivate : public SESv2RequestPrivate {

public:
    GetEmailIdentityPoliciesRequestPrivate(const SESv2Request::Action action,
                                   GetEmailIdentityPoliciesRequest * const q);
    GetEmailIdentityPoliciesRequestPrivate(const GetEmailIdentityPoliciesRequestPrivate &other,
                                   GetEmailIdentityPoliciesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEmailIdentityPoliciesRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
