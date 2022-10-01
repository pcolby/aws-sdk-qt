// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCIDRLOCATIONSREQUEST_P_H
#define QTAWS_LISTCIDRLOCATIONSREQUEST_P_H

#include "route53request_p.h"
#include "listcidrlocationsrequest.h"

namespace QtAws {
namespace Route53 {

class ListCidrLocationsRequest;

class ListCidrLocationsRequestPrivate : public Route53RequestPrivate {

public:
    ListCidrLocationsRequestPrivate(const Route53Request::Action action,
                                   ListCidrLocationsRequest * const q);
    ListCidrLocationsRequestPrivate(const ListCidrLocationsRequestPrivate &other,
                                   ListCidrLocationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCidrLocationsRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
