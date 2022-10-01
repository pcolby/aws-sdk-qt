// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOPERATIONSREQUEST_P_H
#define QTAWS_LISTOPERATIONSREQUEST_P_H

#include "route53domainsrequest_p.h"
#include "listoperationsrequest.h"

namespace QtAws {
namespace Route53Domains {

class ListOperationsRequest;

class ListOperationsRequestPrivate : public Route53DomainsRequestPrivate {

public:
    ListOperationsRequestPrivate(const Route53DomainsRequest::Action action,
                                   ListOperationsRequest * const q);
    ListOperationsRequestPrivate(const ListOperationsRequestPrivate &other,
                                   ListOperationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListOperationsRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
