// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEQUERYLOGGINGCONFIGREQUEST_P_H
#define QTAWS_DELETEQUERYLOGGINGCONFIGREQUEST_P_H

#include "route53request_p.h"
#include "deletequeryloggingconfigrequest.h"

namespace QtAws {
namespace Route53 {

class DeleteQueryLoggingConfigRequest;

class DeleteQueryLoggingConfigRequestPrivate : public Route53RequestPrivate {

public:
    DeleteQueryLoggingConfigRequestPrivate(const Route53Request::Action action,
                                   DeleteQueryLoggingConfigRequest * const q);
    DeleteQueryLoggingConfigRequestPrivate(const DeleteQueryLoggingConfigRequestPrivate &other,
                                   DeleteQueryLoggingConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteQueryLoggingConfigRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
