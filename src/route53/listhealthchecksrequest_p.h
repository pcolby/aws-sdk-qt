// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHEALTHCHECKSREQUEST_P_H
#define QTAWS_LISTHEALTHCHECKSREQUEST_P_H

#include "route53request_p.h"
#include "listhealthchecksrequest.h"

namespace QtAws {
namespace Route53 {

class ListHealthChecksRequest;

class ListHealthChecksRequestPrivate : public Route53RequestPrivate {

public:
    ListHealthChecksRequestPrivate(const Route53Request::Action action,
                                   ListHealthChecksRequest * const q);
    ListHealthChecksRequestPrivate(const ListHealthChecksRequestPrivate &other,
                                   ListHealthChecksRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListHealthChecksRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
