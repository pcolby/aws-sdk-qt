// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHOSTEDZONESBYVPCREQUEST_P_H
#define QTAWS_LISTHOSTEDZONESBYVPCREQUEST_P_H

#include "route53request_p.h"
#include "listhostedzonesbyvpcrequest.h"

namespace QtAws {
namespace Route53 {

class ListHostedZonesByVPCRequest;

class ListHostedZonesByVPCRequestPrivate : public Route53RequestPrivate {

public:
    ListHostedZonesByVPCRequestPrivate(const Route53Request::Action action,
                                   ListHostedZonesByVPCRequest * const q);
    ListHostedZonesByVPCRequestPrivate(const ListHostedZonesByVPCRequestPrivate &other,
                                   ListHostedZonesByVPCRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListHostedZonesByVPCRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
