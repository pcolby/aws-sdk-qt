// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHEALTHCHECKLASTFAILUREREASONREQUEST_P_H
#define QTAWS_GETHEALTHCHECKLASTFAILUREREASONREQUEST_P_H

#include "route53request_p.h"
#include "gethealthchecklastfailurereasonrequest.h"

namespace QtAws {
namespace Route53 {

class GetHealthCheckLastFailureReasonRequest;

class GetHealthCheckLastFailureReasonRequestPrivate : public Route53RequestPrivate {

public:
    GetHealthCheckLastFailureReasonRequestPrivate(const Route53Request::Action action,
                                   GetHealthCheckLastFailureReasonRequest * const q);
    GetHealthCheckLastFailureReasonRequestPrivate(const GetHealthCheckLastFailureReasonRequestPrivate &other,
                                   GetHealthCheckLastFailureReasonRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetHealthCheckLastFailureReasonRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
