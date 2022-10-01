// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOMAINNAMESERVERSREQUEST_P_H
#define QTAWS_UPDATEDOMAINNAMESERVERSREQUEST_P_H

#include "route53domainsrequest_p.h"
#include "updatedomainnameserversrequest.h"

namespace QtAws {
namespace Route53Domains {

class UpdateDomainNameserversRequest;

class UpdateDomainNameserversRequestPrivate : public Route53DomainsRequestPrivate {

public:
    UpdateDomainNameserversRequestPrivate(const Route53DomainsRequest::Action action,
                                   UpdateDomainNameserversRequest * const q);
    UpdateDomainNameserversRequestPrivate(const UpdateDomainNameserversRequestPrivate &other,
                                   UpdateDomainNameserversRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDomainNameserversRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
