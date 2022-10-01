// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHEALTHCHECKCOUNTREQUEST_P_H
#define QTAWS_GETHEALTHCHECKCOUNTREQUEST_P_H

#include "route53request_p.h"
#include "gethealthcheckcountrequest.h"

namespace QtAws {
namespace Route53 {

class GetHealthCheckCountRequest;

class GetHealthCheckCountRequestPrivate : public Route53RequestPrivate {

public:
    GetHealthCheckCountRequestPrivate(const Route53Request::Action action,
                                   GetHealthCheckCountRequest * const q);
    GetHealthCheckCountRequestPrivate(const GetHealthCheckCountRequestPrivate &other,
                                   GetHealthCheckCountRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetHealthCheckCountRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
