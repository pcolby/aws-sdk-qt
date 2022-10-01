// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRAFFICPOLICYINSTANCEREQUEST_P_H
#define QTAWS_GETTRAFFICPOLICYINSTANCEREQUEST_P_H

#include "route53request_p.h"
#include "gettrafficpolicyinstancerequest.h"

namespace QtAws {
namespace Route53 {

class GetTrafficPolicyInstanceRequest;

class GetTrafficPolicyInstanceRequestPrivate : public Route53RequestPrivate {

public:
    GetTrafficPolicyInstanceRequestPrivate(const Route53Request::Action action,
                                   GetTrafficPolicyInstanceRequest * const q);
    GetTrafficPolicyInstanceRequestPrivate(const GetTrafficPolicyInstanceRequestPrivate &other,
                                   GetTrafficPolicyInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTrafficPolicyInstanceRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
