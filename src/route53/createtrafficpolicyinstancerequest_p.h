// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRAFFICPOLICYINSTANCEREQUEST_P_H
#define QTAWS_CREATETRAFFICPOLICYINSTANCEREQUEST_P_H

#include "route53request_p.h"
#include "createtrafficpolicyinstancerequest.h"

namespace QtAws {
namespace Route53 {

class CreateTrafficPolicyInstanceRequest;

class CreateTrafficPolicyInstanceRequestPrivate : public Route53RequestPrivate {

public:
    CreateTrafficPolicyInstanceRequestPrivate(const Route53Request::Action action,
                                   CreateTrafficPolicyInstanceRequest * const q);
    CreateTrafficPolicyInstanceRequestPrivate(const CreateTrafficPolicyInstanceRequestPrivate &other,
                                   CreateTrafficPolicyInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTrafficPolicyInstanceRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
