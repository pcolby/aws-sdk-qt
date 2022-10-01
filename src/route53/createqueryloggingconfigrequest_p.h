// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEQUERYLOGGINGCONFIGREQUEST_P_H
#define QTAWS_CREATEQUERYLOGGINGCONFIGREQUEST_P_H

#include "route53request_p.h"
#include "createqueryloggingconfigrequest.h"

namespace QtAws {
namespace Route53 {

class CreateQueryLoggingConfigRequest;

class CreateQueryLoggingConfigRequestPrivate : public Route53RequestPrivate {

public:
    CreateQueryLoggingConfigRequestPrivate(const Route53Request::Action action,
                                   CreateQueryLoggingConfigRequest * const q);
    CreateQueryLoggingConfigRequestPrivate(const CreateQueryLoggingConfigRequestPrivate &other,
                                   CreateQueryLoggingConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateQueryLoggingConfigRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
