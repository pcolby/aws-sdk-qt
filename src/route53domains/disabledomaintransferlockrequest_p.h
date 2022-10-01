// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEDOMAINTRANSFERLOCKREQUEST_P_H
#define QTAWS_DISABLEDOMAINTRANSFERLOCKREQUEST_P_H

#include "route53domainsrequest_p.h"
#include "disabledomaintransferlockrequest.h"

namespace QtAws {
namespace Route53Domains {

class DisableDomainTransferLockRequest;

class DisableDomainTransferLockRequestPrivate : public Route53DomainsRequestPrivate {

public:
    DisableDomainTransferLockRequestPrivate(const Route53DomainsRequest::Action action,
                                   DisableDomainTransferLockRequest * const q);
    DisableDomainTransferLockRequestPrivate(const DisableDomainTransferLockRequestPrivate &other,
                                   DisableDomainTransferLockRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableDomainTransferLockRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
