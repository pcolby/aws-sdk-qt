// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHEALTHCHECKREQUEST_P_H
#define QTAWS_CREATEHEALTHCHECKREQUEST_P_H

#include "route53request_p.h"
#include "createhealthcheckrequest.h"

namespace QtAws {
namespace Route53 {

class CreateHealthCheckRequest;

class CreateHealthCheckRequestPrivate : public Route53RequestPrivate {

public:
    CreateHealthCheckRequestPrivate(const Route53Request::Action action,
                                   CreateHealthCheckRequest * const q);
    CreateHealthCheckRequestPrivate(const CreateHealthCheckRequestPrivate &other,
                                   CreateHealthCheckRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateHealthCheckRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
