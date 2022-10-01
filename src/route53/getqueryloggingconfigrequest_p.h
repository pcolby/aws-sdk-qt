// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUERYLOGGINGCONFIGREQUEST_P_H
#define QTAWS_GETQUERYLOGGINGCONFIGREQUEST_P_H

#include "route53request_p.h"
#include "getqueryloggingconfigrequest.h"

namespace QtAws {
namespace Route53 {

class GetQueryLoggingConfigRequest;

class GetQueryLoggingConfigRequestPrivate : public Route53RequestPrivate {

public:
    GetQueryLoggingConfigRequestPrivate(const Route53Request::Action action,
                                   GetQueryLoggingConfigRequest * const q);
    GetQueryLoggingConfigRequestPrivate(const GetQueryLoggingConfigRequestPrivate &other,
                                   GetQueryLoggingConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetQueryLoggingConfigRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
