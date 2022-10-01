// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSFERDOMAINTOANOTHERAWSACCOUNTREQUEST_P_H
#define QTAWS_TRANSFERDOMAINTOANOTHERAWSACCOUNTREQUEST_P_H

#include "route53domainsrequest_p.h"
#include "transferdomaintoanotherawsaccountrequest.h"

namespace QtAws {
namespace Route53Domains {

class TransferDomainToAnotherAwsAccountRequest;

class TransferDomainToAnotherAwsAccountRequestPrivate : public Route53DomainsRequestPrivate {

public:
    TransferDomainToAnotherAwsAccountRequestPrivate(const Route53DomainsRequest::Action action,
                                   TransferDomainToAnotherAwsAccountRequest * const q);
    TransferDomainToAnotherAwsAccountRequestPrivate(const TransferDomainToAnotherAwsAccountRequestPrivate &other,
                                   TransferDomainToAnotherAwsAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(TransferDomainToAnotherAwsAccountRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
