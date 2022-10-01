// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHECKDOMAINTRANSFERABILITYREQUEST_P_H
#define QTAWS_CHECKDOMAINTRANSFERABILITYREQUEST_P_H

#include "route53domainsrequest_p.h"
#include "checkdomaintransferabilityrequest.h"

namespace QtAws {
namespace Route53Domains {

class CheckDomainTransferabilityRequest;

class CheckDomainTransferabilityRequestPrivate : public Route53DomainsRequestPrivate {

public:
    CheckDomainTransferabilityRequestPrivate(const Route53DomainsRequest::Action action,
                                   CheckDomainTransferabilityRequest * const q);
    CheckDomainTransferabilityRequestPrivate(const CheckDomainTransferabilityRequestPrivate &other,
                                   CheckDomainTransferabilityRequest * const q);

private:
    Q_DECLARE_PUBLIC(CheckDomainTransferabilityRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
