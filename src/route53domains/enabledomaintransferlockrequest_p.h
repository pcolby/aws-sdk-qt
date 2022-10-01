// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEDOMAINTRANSFERLOCKREQUEST_P_H
#define QTAWS_ENABLEDOMAINTRANSFERLOCKREQUEST_P_H

#include "route53domainsrequest_p.h"
#include "enabledomaintransferlockrequest.h"

namespace QtAws {
namespace Route53Domains {

class EnableDomainTransferLockRequest;

class EnableDomainTransferLockRequestPrivate : public Route53DomainsRequestPrivate {

public:
    EnableDomainTransferLockRequestPrivate(const Route53DomainsRequest::Action action,
                                   EnableDomainTransferLockRequest * const q);
    EnableDomainTransferLockRequestPrivate(const EnableDomainTransferLockRequestPrivate &other,
                                   EnableDomainTransferLockRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableDomainTransferLockRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
