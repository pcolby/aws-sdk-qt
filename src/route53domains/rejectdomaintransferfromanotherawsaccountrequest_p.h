// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTDOMAINTRANSFERFROMANOTHERAWSACCOUNTREQUEST_P_H
#define QTAWS_REJECTDOMAINTRANSFERFROMANOTHERAWSACCOUNTREQUEST_P_H

#include "route53domainsrequest_p.h"
#include "rejectdomaintransferfromanotherawsaccountrequest.h"

namespace QtAws {
namespace Route53Domains {

class RejectDomainTransferFromAnotherAwsAccountRequest;

class RejectDomainTransferFromAnotherAwsAccountRequestPrivate : public Route53DomainsRequestPrivate {

public:
    RejectDomainTransferFromAnotherAwsAccountRequestPrivate(const Route53DomainsRequest::Action action,
                                   RejectDomainTransferFromAnotherAwsAccountRequest * const q);
    RejectDomainTransferFromAnotherAwsAccountRequestPrivate(const RejectDomainTransferFromAnotherAwsAccountRequestPrivate &other,
                                   RejectDomainTransferFromAnotherAwsAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(RejectDomainTransferFromAnotherAwsAccountRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
