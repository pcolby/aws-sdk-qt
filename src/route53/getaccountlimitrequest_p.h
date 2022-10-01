// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTLIMITREQUEST_P_H
#define QTAWS_GETACCOUNTLIMITREQUEST_P_H

#include "route53request_p.h"
#include "getaccountlimitrequest.h"

namespace QtAws {
namespace Route53 {

class GetAccountLimitRequest;

class GetAccountLimitRequestPrivate : public Route53RequestPrivate {

public:
    GetAccountLimitRequestPrivate(const Route53Request::Action action,
                                   GetAccountLimitRequest * const q);
    GetAccountLimitRequestPrivate(const GetAccountLimitRequestPrivate &other,
                                   GetAccountLimitRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAccountLimitRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
