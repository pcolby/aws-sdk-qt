// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHOSTEDZONESBYNAMEREQUEST_P_H
#define QTAWS_LISTHOSTEDZONESBYNAMEREQUEST_P_H

#include "route53request_p.h"
#include "listhostedzonesbynamerequest.h"

namespace QtAws {
namespace Route53 {

class ListHostedZonesByNameRequest;

class ListHostedZonesByNameRequestPrivate : public Route53RequestPrivate {

public:
    ListHostedZonesByNameRequestPrivate(const Route53Request::Action action,
                                   ListHostedZonesByNameRequest * const q);
    ListHostedZonesByNameRequestPrivate(const ListHostedZonesByNameRequestPrivate &other,
                                   ListHostedZonesByNameRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListHostedZonesByNameRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
