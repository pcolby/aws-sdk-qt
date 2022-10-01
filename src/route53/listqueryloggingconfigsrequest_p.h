// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTQUERYLOGGINGCONFIGSREQUEST_P_H
#define QTAWS_LISTQUERYLOGGINGCONFIGSREQUEST_P_H

#include "route53request_p.h"
#include "listqueryloggingconfigsrequest.h"

namespace QtAws {
namespace Route53 {

class ListQueryLoggingConfigsRequest;

class ListQueryLoggingConfigsRequestPrivate : public Route53RequestPrivate {

public:
    ListQueryLoggingConfigsRequestPrivate(const Route53Request::Action action,
                                   ListQueryLoggingConfigsRequest * const q);
    ListQueryLoggingConfigsRequestPrivate(const ListQueryLoggingConfigsRequestPrivate &other,
                                   ListQueryLoggingConfigsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListQueryLoggingConfigsRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
