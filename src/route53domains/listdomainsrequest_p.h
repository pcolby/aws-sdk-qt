// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOMAINSREQUEST_P_H
#define QTAWS_LISTDOMAINSREQUEST_P_H

#include "route53domainsrequest_p.h"
#include "listdomainsrequest.h"

namespace QtAws {
namespace Route53Domains {

class ListDomainsRequest;

class ListDomainsRequestPrivate : public Route53DomainsRequestPrivate {

public:
    ListDomainsRequestPrivate(const Route53DomainsRequest::Action action,
                                   ListDomainsRequest * const q);
    ListDomainsRequestPrivate(const ListDomainsRequestPrivate &other,
                                   ListDomainsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDomainsRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
