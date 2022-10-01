// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELDOMAINTRANSFERTOANOTHERAWSACCOUNTREQUEST_P_H
#define QTAWS_CANCELDOMAINTRANSFERTOANOTHERAWSACCOUNTREQUEST_P_H

#include "route53domainsrequest_p.h"
#include "canceldomaintransfertoanotherawsaccountrequest.h"

namespace QtAws {
namespace Route53Domains {

class CancelDomainTransferToAnotherAwsAccountRequest;

class CancelDomainTransferToAnotherAwsAccountRequestPrivate : public Route53DomainsRequestPrivate {

public:
    CancelDomainTransferToAnotherAwsAccountRequestPrivate(const Route53DomainsRequest::Action action,
                                   CancelDomainTransferToAnotherAwsAccountRequest * const q);
    CancelDomainTransferToAnotherAwsAccountRequestPrivate(const CancelDomainTransferToAnotherAwsAccountRequestPrivate &other,
                                   CancelDomainTransferToAnotherAwsAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelDomainTransferToAnotherAwsAccountRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
