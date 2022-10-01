// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRAFFICPOLICYINSTANCECOUNTREQUEST_P_H
#define QTAWS_GETTRAFFICPOLICYINSTANCECOUNTREQUEST_P_H

#include "route53request_p.h"
#include "gettrafficpolicyinstancecountrequest.h"

namespace QtAws {
namespace Route53 {

class GetTrafficPolicyInstanceCountRequest;

class GetTrafficPolicyInstanceCountRequestPrivate : public Route53RequestPrivate {

public:
    GetTrafficPolicyInstanceCountRequestPrivate(const Route53Request::Action action,
                                   GetTrafficPolicyInstanceCountRequest * const q);
    GetTrafficPolicyInstanceCountRequestPrivate(const GetTrafficPolicyInstanceCountRequestPrivate &other,
                                   GetTrafficPolicyInstanceCountRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTrafficPolicyInstanceCountRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
