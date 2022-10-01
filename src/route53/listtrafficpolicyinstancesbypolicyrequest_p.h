// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRAFFICPOLICYINSTANCESBYPOLICYREQUEST_P_H
#define QTAWS_LISTTRAFFICPOLICYINSTANCESBYPOLICYREQUEST_P_H

#include "route53request_p.h"
#include "listtrafficpolicyinstancesbypolicyrequest.h"

namespace QtAws {
namespace Route53 {

class ListTrafficPolicyInstancesByPolicyRequest;

class ListTrafficPolicyInstancesByPolicyRequestPrivate : public Route53RequestPrivate {

public:
    ListTrafficPolicyInstancesByPolicyRequestPrivate(const Route53Request::Action action,
                                   ListTrafficPolicyInstancesByPolicyRequest * const q);
    ListTrafficPolicyInstancesByPolicyRequestPrivate(const ListTrafficPolicyInstancesByPolicyRequestPrivate &other,
                                   ListTrafficPolicyInstancesByPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTrafficPolicyInstancesByPolicyRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
