// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRAFFICPOLICYINSTANCEREQUEST_P_H
#define QTAWS_DELETETRAFFICPOLICYINSTANCEREQUEST_P_H

#include "route53request_p.h"
#include "deletetrafficpolicyinstancerequest.h"

namespace QtAws {
namespace Route53 {

class DeleteTrafficPolicyInstanceRequest;

class DeleteTrafficPolicyInstanceRequestPrivate : public Route53RequestPrivate {

public:
    DeleteTrafficPolicyInstanceRequestPrivate(const Route53Request::Action action,
                                   DeleteTrafficPolicyInstanceRequest * const q);
    DeleteTrafficPolicyInstanceRequestPrivate(const DeleteTrafficPolicyInstanceRequestPrivate &other,
                                   DeleteTrafficPolicyInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTrafficPolicyInstanceRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
