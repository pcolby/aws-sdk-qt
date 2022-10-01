// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETAGSFORDOMAINREQUEST_P_H
#define QTAWS_UPDATETAGSFORDOMAINREQUEST_P_H

#include "route53domainsrequest_p.h"
#include "updatetagsfordomainrequest.h"

namespace QtAws {
namespace Route53Domains {

class UpdateTagsForDomainRequest;

class UpdateTagsForDomainRequestPrivate : public Route53DomainsRequestPrivate {

public:
    UpdateTagsForDomainRequestPrivate(const Route53DomainsRequest::Action action,
                                   UpdateTagsForDomainRequest * const q);
    UpdateTagsForDomainRequestPrivate(const UpdateTagsForDomainRequestPrivate &other,
                                   UpdateTagsForDomainRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateTagsForDomainRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
