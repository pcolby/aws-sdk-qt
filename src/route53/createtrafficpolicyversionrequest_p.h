// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRAFFICPOLICYVERSIONREQUEST_P_H
#define QTAWS_CREATETRAFFICPOLICYVERSIONREQUEST_P_H

#include "route53request_p.h"
#include "createtrafficpolicyversionrequest.h"

namespace QtAws {
namespace Route53 {

class CreateTrafficPolicyVersionRequest;

class CreateTrafficPolicyVersionRequestPrivate : public Route53RequestPrivate {

public:
    CreateTrafficPolicyVersionRequestPrivate(const Route53Request::Action action,
                                   CreateTrafficPolicyVersionRequest * const q);
    CreateTrafficPolicyVersionRequestPrivate(const CreateTrafficPolicyVersionRequestPrivate &other,
                                   CreateTrafficPolicyVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTrafficPolicyVersionRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
