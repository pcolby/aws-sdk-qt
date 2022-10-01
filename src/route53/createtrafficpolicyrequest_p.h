// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRAFFICPOLICYREQUEST_P_H
#define QTAWS_CREATETRAFFICPOLICYREQUEST_P_H

#include "route53request_p.h"
#include "createtrafficpolicyrequest.h"

namespace QtAws {
namespace Route53 {

class CreateTrafficPolicyRequest;

class CreateTrafficPolicyRequestPrivate : public Route53RequestPrivate {

public:
    CreateTrafficPolicyRequestPrivate(const Route53Request::Action action,
                                   CreateTrafficPolicyRequest * const q);
    CreateTrafficPolicyRequestPrivate(const CreateTrafficPolicyRequestPrivate &other,
                                   CreateTrafficPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTrafficPolicyRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
