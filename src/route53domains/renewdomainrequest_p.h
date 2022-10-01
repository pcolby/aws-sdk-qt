// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RENEWDOMAINREQUEST_P_H
#define QTAWS_RENEWDOMAINREQUEST_P_H

#include "route53domainsrequest_p.h"
#include "renewdomainrequest.h"

namespace QtAws {
namespace Route53Domains {

class RenewDomainRequest;

class RenewDomainRequestPrivate : public Route53DomainsRequestPrivate {

public:
    RenewDomainRequestPrivate(const Route53DomainsRequest::Action action,
                                   RenewDomainRequest * const q);
    RenewDomainRequestPrivate(const RenewDomainRequestPrivate &other,
                                   RenewDomainRequest * const q);

private:
    Q_DECLARE_PUBLIC(RenewDomainRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
