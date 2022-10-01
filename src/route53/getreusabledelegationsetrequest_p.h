// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREUSABLEDELEGATIONSETREQUEST_P_H
#define QTAWS_GETREUSABLEDELEGATIONSETREQUEST_P_H

#include "route53request_p.h"
#include "getreusabledelegationsetrequest.h"

namespace QtAws {
namespace Route53 {

class GetReusableDelegationSetRequest;

class GetReusableDelegationSetRequestPrivate : public Route53RequestPrivate {

public:
    GetReusableDelegationSetRequestPrivate(const Route53Request::Action action,
                                   GetReusableDelegationSetRequest * const q);
    GetReusableDelegationSetRequestPrivate(const GetReusableDelegationSetRequestPrivate &other,
                                   GetReusableDelegationSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetReusableDelegationSetRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
