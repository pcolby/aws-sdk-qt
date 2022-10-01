// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERDOMAINREQUEST_P_H
#define QTAWS_REGISTERDOMAINREQUEST_P_H

#include "route53domainsrequest_p.h"
#include "registerdomainrequest.h"

namespace QtAws {
namespace Route53Domains {

class RegisterDomainRequest;

class RegisterDomainRequestPrivate : public Route53DomainsRequestPrivate {

public:
    RegisterDomainRequestPrivate(const Route53DomainsRequest::Action action,
                                   RegisterDomainRequest * const q);
    RegisterDomainRequestPrivate(const RegisterDomainRequestPrivate &other,
                                   RegisterDomainRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterDomainRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
