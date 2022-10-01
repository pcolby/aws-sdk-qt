// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEDOMAINAUTORENEWREQUEST_P_H
#define QTAWS_DISABLEDOMAINAUTORENEWREQUEST_P_H

#include "route53domainsrequest_p.h"
#include "disabledomainautorenewrequest.h"

namespace QtAws {
namespace Route53Domains {

class DisableDomainAutoRenewRequest;

class DisableDomainAutoRenewRequestPrivate : public Route53DomainsRequestPrivate {

public:
    DisableDomainAutoRenewRequestPrivate(const Route53DomainsRequest::Action action,
                                   DisableDomainAutoRenewRequest * const q);
    DisableDomainAutoRenewRequestPrivate(const DisableDomainAutoRenewRequestPrivate &other,
                                   DisableDomainAutoRenewRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableDomainAutoRenewRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
