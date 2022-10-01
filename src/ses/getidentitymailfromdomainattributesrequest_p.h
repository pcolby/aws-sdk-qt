// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIDENTITYMAILFROMDOMAINATTRIBUTESREQUEST_P_H
#define QTAWS_GETIDENTITYMAILFROMDOMAINATTRIBUTESREQUEST_P_H

#include "sesrequest_p.h"
#include "getidentitymailfromdomainattributesrequest.h"

namespace QtAws {
namespace Ses {

class GetIdentityMailFromDomainAttributesRequest;

class GetIdentityMailFromDomainAttributesRequestPrivate : public SesRequestPrivate {

public:
    GetIdentityMailFromDomainAttributesRequestPrivate(const SesRequest::Action action,
                                   GetIdentityMailFromDomainAttributesRequest * const q);
    GetIdentityMailFromDomainAttributesRequestPrivate(const GetIdentityMailFromDomainAttributesRequestPrivate &other,
                                   GetIdentityMailFromDomainAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetIdentityMailFromDomainAttributesRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
