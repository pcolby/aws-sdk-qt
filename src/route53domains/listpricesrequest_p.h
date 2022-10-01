// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPRICESREQUEST_P_H
#define QTAWS_LISTPRICESREQUEST_P_H

#include "route53domainsrequest_p.h"
#include "listpricesrequest.h"

namespace QtAws {
namespace Route53Domains {

class ListPricesRequest;

class ListPricesRequestPrivate : public Route53DomainsRequestPrivate {

public:
    ListPricesRequestPrivate(const Route53DomainsRequest::Action action,
                                   ListPricesRequest * const q);
    ListPricesRequestPrivate(const ListPricesRequestPrivate &other,
                                   ListPricesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPricesRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
