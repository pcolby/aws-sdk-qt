// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRAFFICPOLICYINSTANCESREQUEST_P_H
#define QTAWS_LISTTRAFFICPOLICYINSTANCESREQUEST_P_H

#include "route53request_p.h"
#include "listtrafficpolicyinstancesrequest.h"

namespace QtAws {
namespace Route53 {

class ListTrafficPolicyInstancesRequest;

class ListTrafficPolicyInstancesRequestPrivate : public Route53RequestPrivate {

public:
    ListTrafficPolicyInstancesRequestPrivate(const Route53Request::Action action,
                                   ListTrafficPolicyInstancesRequest * const q);
    ListTrafficPolicyInstancesRequestPrivate(const ListTrafficPolicyInstancesRequestPrivate &other,
                                   ListTrafficPolicyInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTrafficPolicyInstancesRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
