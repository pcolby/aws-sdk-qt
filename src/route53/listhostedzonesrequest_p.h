// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHOSTEDZONESREQUEST_P_H
#define QTAWS_LISTHOSTEDZONESREQUEST_P_H

#include "route53request_p.h"
#include "listhostedzonesrequest.h"

namespace QtAws {
namespace Route53 {

class ListHostedZonesRequest;

class ListHostedZonesRequestPrivate : public Route53RequestPrivate {

public:
    ListHostedZonesRequestPrivate(const Route53Request::Action action,
                                   ListHostedZonesRequest * const q);
    ListHostedZonesRequestPrivate(const ListHostedZonesRequestPrivate &other,
                                   ListHostedZonesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListHostedZonesRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
