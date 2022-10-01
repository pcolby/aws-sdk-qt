// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETRAFFICPOLICYINSTANCEREQUEST_P_H
#define QTAWS_UPDATETRAFFICPOLICYINSTANCEREQUEST_P_H

#include "route53request_p.h"
#include "updatetrafficpolicyinstancerequest.h"

namespace QtAws {
namespace Route53 {

class UpdateTrafficPolicyInstanceRequest;

class UpdateTrafficPolicyInstanceRequestPrivate : public Route53RequestPrivate {

public:
    UpdateTrafficPolicyInstanceRequestPrivate(const Route53Request::Action action,
                                   UpdateTrafficPolicyInstanceRequest * const q);
    UpdateTrafficPolicyInstanceRequestPrivate(const UpdateTrafficPolicyInstanceRequestPrivate &other,
                                   UpdateTrafficPolicyInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateTrafficPolicyInstanceRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
