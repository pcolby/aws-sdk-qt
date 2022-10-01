// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHEALTHCHECKSTATUSREQUEST_P_H
#define QTAWS_GETHEALTHCHECKSTATUSREQUEST_P_H

#include "route53request_p.h"
#include "gethealthcheckstatusrequest.h"

namespace QtAws {
namespace Route53 {

class GetHealthCheckStatusRequest;

class GetHealthCheckStatusRequestPrivate : public Route53RequestPrivate {

public:
    GetHealthCheckStatusRequestPrivate(const Route53Request::Action action,
                                   GetHealthCheckStatusRequest * const q);
    GetHealthCheckStatusRequestPrivate(const GetHealthCheckStatusRequestPrivate &other,
                                   GetHealthCheckStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetHealthCheckStatusRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
