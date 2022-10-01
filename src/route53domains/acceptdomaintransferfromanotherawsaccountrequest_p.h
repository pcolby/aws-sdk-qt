// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTDOMAINTRANSFERFROMANOTHERAWSACCOUNTREQUEST_P_H
#define QTAWS_ACCEPTDOMAINTRANSFERFROMANOTHERAWSACCOUNTREQUEST_P_H

#include "route53domainsrequest_p.h"
#include "acceptdomaintransferfromanotherawsaccountrequest.h"

namespace QtAws {
namespace Route53Domains {

class AcceptDomainTransferFromAnotherAwsAccountRequest;

class AcceptDomainTransferFromAnotherAwsAccountRequestPrivate : public Route53DomainsRequestPrivate {

public:
    AcceptDomainTransferFromAnotherAwsAccountRequestPrivate(const Route53DomainsRequest::Action action,
                                   AcceptDomainTransferFromAnotherAwsAccountRequest * const q);
    AcceptDomainTransferFromAnotherAwsAccountRequestPrivate(const AcceptDomainTransferFromAnotherAwsAccountRequestPrivate &other,
                                   AcceptDomainTransferFromAnotherAwsAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(AcceptDomainTransferFromAnotherAwsAccountRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
