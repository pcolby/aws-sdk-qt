// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSFERDOMAINREQUEST_P_H
#define QTAWS_TRANSFERDOMAINREQUEST_P_H

#include "route53domainsrequest_p.h"
#include "transferdomainrequest.h"

namespace QtAws {
namespace Route53Domains {

class TransferDomainRequest;

class TransferDomainRequestPrivate : public Route53DomainsRequestPrivate {

public:
    TransferDomainRequestPrivate(const Route53DomainsRequest::Action action,
                                   TransferDomainRequest * const q);
    TransferDomainRequestPrivate(const TransferDomainRequestPrivate &other,
                                   TransferDomainRequest * const q);

private:
    Q_DECLARE_PUBLIC(TransferDomainRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
