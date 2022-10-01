// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRAFFICPOLICYINSTANCESBYHOSTEDZONEREQUEST_P_H
#define QTAWS_LISTTRAFFICPOLICYINSTANCESBYHOSTEDZONEREQUEST_P_H

#include "route53request_p.h"
#include "listtrafficpolicyinstancesbyhostedzonerequest.h"

namespace QtAws {
namespace Route53 {

class ListTrafficPolicyInstancesByHostedZoneRequest;

class ListTrafficPolicyInstancesByHostedZoneRequestPrivate : public Route53RequestPrivate {

public:
    ListTrafficPolicyInstancesByHostedZoneRequestPrivate(const Route53Request::Action action,
                                   ListTrafficPolicyInstancesByHostedZoneRequest * const q);
    ListTrafficPolicyInstancesByHostedZoneRequestPrivate(const ListTrafficPolicyInstancesByHostedZoneRequestPrivate &other,
                                   ListTrafficPolicyInstancesByHostedZoneRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTrafficPolicyInstancesByHostedZoneRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
