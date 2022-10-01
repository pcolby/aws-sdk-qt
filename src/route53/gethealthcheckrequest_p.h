// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHEALTHCHECKREQUEST_P_H
#define QTAWS_GETHEALTHCHECKREQUEST_P_H

#include "route53request_p.h"
#include "gethealthcheckrequest.h"

namespace QtAws {
namespace Route53 {

class GetHealthCheckRequest;

class GetHealthCheckRequestPrivate : public Route53RequestPrivate {

public:
    GetHealthCheckRequestPrivate(const Route53Request::Action action,
                                   GetHealthCheckRequest * const q);
    GetHealthCheckRequestPrivate(const GetHealthCheckRequestPrivate &other,
                                   GetHealthCheckRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetHealthCheckRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
