// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEDOMAINAUTORENEWREQUEST_P_H
#define QTAWS_ENABLEDOMAINAUTORENEWREQUEST_P_H

#include "route53domainsrequest_p.h"
#include "enabledomainautorenewrequest.h"

namespace QtAws {
namespace Route53Domains {

class EnableDomainAutoRenewRequest;

class EnableDomainAutoRenewRequestPrivate : public Route53DomainsRequestPrivate {

public:
    EnableDomainAutoRenewRequestPrivate(const Route53DomainsRequest::Action action,
                                   EnableDomainAutoRenewRequest * const q);
    EnableDomainAutoRenewRequestPrivate(const EnableDomainAutoRenewRequestPrivate &other,
                                   EnableDomainAutoRenewRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableDomainAutoRenewRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
