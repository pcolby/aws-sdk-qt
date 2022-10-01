// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHEALTHCHECKREQUEST_P_H
#define QTAWS_DELETEHEALTHCHECKREQUEST_P_H

#include "route53request_p.h"
#include "deletehealthcheckrequest.h"

namespace QtAws {
namespace Route53 {

class DeleteHealthCheckRequest;

class DeleteHealthCheckRequestPrivate : public Route53RequestPrivate {

public:
    DeleteHealthCheckRequestPrivate(const Route53Request::Action action,
                                   DeleteHealthCheckRequest * const q);
    DeleteHealthCheckRequestPrivate(const DeleteHealthCheckRequestPrivate &other,
                                   DeleteHealthCheckRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteHealthCheckRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
