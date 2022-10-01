// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOMAINCONTACTREQUEST_P_H
#define QTAWS_UPDATEDOMAINCONTACTREQUEST_P_H

#include "route53domainsrequest_p.h"
#include "updatedomaincontactrequest.h"

namespace QtAws {
namespace Route53Domains {

class UpdateDomainContactRequest;

class UpdateDomainContactRequestPrivate : public Route53DomainsRequestPrivate {

public:
    UpdateDomainContactRequestPrivate(const Route53DomainsRequest::Action action,
                                   UpdateDomainContactRequest * const q);
    UpdateDomainContactRequestPrivate(const UpdateDomainContactRequestPrivate &other,
                                   UpdateDomainContactRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDomainContactRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
