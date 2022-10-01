// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRAFFICPOLICYVERSIONSREQUEST_P_H
#define QTAWS_LISTTRAFFICPOLICYVERSIONSREQUEST_P_H

#include "route53request_p.h"
#include "listtrafficpolicyversionsrequest.h"

namespace QtAws {
namespace Route53 {

class ListTrafficPolicyVersionsRequest;

class ListTrafficPolicyVersionsRequestPrivate : public Route53RequestPrivate {

public:
    ListTrafficPolicyVersionsRequestPrivate(const Route53Request::Action action,
                                   ListTrafficPolicyVersionsRequest * const q);
    ListTrafficPolicyVersionsRequestPrivate(const ListTrafficPolicyVersionsRequestPrivate &other,
                                   ListTrafficPolicyVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTrafficPolicyVersionsRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
