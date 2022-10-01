// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANGEREQUEST_P_H
#define QTAWS_GETCHANGEREQUEST_P_H

#include "route53request_p.h"
#include "getchangerequest.h"

namespace QtAws {
namespace Route53 {

class GetChangeRequest;

class GetChangeRequestPrivate : public Route53RequestPrivate {

public:
    GetChangeRequestPrivate(const Route53Request::Action action,
                                   GetChangeRequest * const q);
    GetChangeRequestPrivate(const GetChangeRequestPrivate &other,
                                   GetChangeRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetChangeRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
