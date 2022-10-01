// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRAFFICPOLICIESREQUEST_P_H
#define QTAWS_LISTTRAFFICPOLICIESREQUEST_P_H

#include "route53request_p.h"
#include "listtrafficpoliciesrequest.h"

namespace QtAws {
namespace Route53 {

class ListTrafficPoliciesRequest;

class ListTrafficPoliciesRequestPrivate : public Route53RequestPrivate {

public:
    ListTrafficPoliciesRequestPrivate(const Route53Request::Action action,
                                   ListTrafficPoliciesRequest * const q);
    ListTrafficPoliciesRequestPrivate(const ListTrafficPoliciesRequestPrivate &other,
                                   ListTrafficPoliciesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTrafficPoliciesRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
