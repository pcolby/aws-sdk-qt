// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOMAINCONTACTPRIVACYREQUEST_P_H
#define QTAWS_UPDATEDOMAINCONTACTPRIVACYREQUEST_P_H

#include "route53domainsrequest_p.h"
#include "updatedomaincontactprivacyrequest.h"

namespace QtAws {
namespace Route53Domains {

class UpdateDomainContactPrivacyRequest;

class UpdateDomainContactPrivacyRequestPrivate : public Route53DomainsRequestPrivate {

public:
    UpdateDomainContactPrivacyRequestPrivate(const Route53DomainsRequest::Action action,
                                   UpdateDomainContactPrivacyRequest * const q);
    UpdateDomainContactPrivacyRequestPrivate(const UpdateDomainContactPrivacyRequestPrivate &other,
                                   UpdateDomainContactPrivacyRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDomainContactPrivacyRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
