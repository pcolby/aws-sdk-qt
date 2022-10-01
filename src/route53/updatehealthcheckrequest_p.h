// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEHEALTHCHECKREQUEST_P_H
#define QTAWS_UPDATEHEALTHCHECKREQUEST_P_H

#include "route53request_p.h"
#include "updatehealthcheckrequest.h"

namespace QtAws {
namespace Route53 {

class UpdateHealthCheckRequest;

class UpdateHealthCheckRequestPrivate : public Route53RequestPrivate {

public:
    UpdateHealthCheckRequestPrivate(const Route53Request::Action action,
                                   UpdateHealthCheckRequest * const q);
    UpdateHealthCheckRequestPrivate(const UpdateHealthCheckRequestPrivate &other,
                                   UpdateHealthCheckRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateHealthCheckRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
