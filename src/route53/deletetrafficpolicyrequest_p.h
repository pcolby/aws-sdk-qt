// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRAFFICPOLICYREQUEST_P_H
#define QTAWS_DELETETRAFFICPOLICYREQUEST_P_H

#include "route53request_p.h"
#include "deletetrafficpolicyrequest.h"

namespace QtAws {
namespace Route53 {

class DeleteTrafficPolicyRequest;

class DeleteTrafficPolicyRequestPrivate : public Route53RequestPrivate {

public:
    DeleteTrafficPolicyRequestPrivate(const Route53Request::Action action,
                                   DeleteTrafficPolicyRequest * const q);
    DeleteTrafficPolicyRequestPrivate(const DeleteTrafficPolicyRequestPrivate &other,
                                   DeleteTrafficPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTrafficPolicyRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
