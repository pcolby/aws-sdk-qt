// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VERIFYDOMAINIDENTITYREQUEST_P_H
#define QTAWS_VERIFYDOMAINIDENTITYREQUEST_P_H

#include "sesrequest_p.h"
#include "verifydomainidentityrequest.h"

namespace QtAws {
namespace Ses {

class VerifyDomainIdentityRequest;

class VerifyDomainIdentityRequestPrivate : public SesRequestPrivate {

public:
    VerifyDomainIdentityRequestPrivate(const SesRequest::Action action,
                                   VerifyDomainIdentityRequest * const q);
    VerifyDomainIdentityRequestPrivate(const VerifyDomainIdentityRequestPrivate &other,
                                   VerifyDomainIdentityRequest * const q);

private:
    Q_DECLARE_PUBLIC(VerifyDomainIdentityRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
