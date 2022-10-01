// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREUSABLEDELEGATIONSETLIMITREQUEST_P_H
#define QTAWS_GETREUSABLEDELEGATIONSETLIMITREQUEST_P_H

#include "route53request_p.h"
#include "getreusabledelegationsetlimitrequest.h"

namespace QtAws {
namespace Route53 {

class GetReusableDelegationSetLimitRequest;

class GetReusableDelegationSetLimitRequestPrivate : public Route53RequestPrivate {

public:
    GetReusableDelegationSetLimitRequestPrivate(const Route53Request::Action action,
                                   GetReusableDelegationSetLimitRequest * const q);
    GetReusableDelegationSetLimitRequestPrivate(const GetReusableDelegationSetLimitRequestPrivate &other,
                                   GetReusableDelegationSetLimitRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetReusableDelegationSetLimitRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
