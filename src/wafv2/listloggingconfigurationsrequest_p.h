// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLOGGINGCONFIGURATIONSREQUEST_P_H
#define QTAWS_LISTLOGGINGCONFIGURATIONSREQUEST_P_H

#include "wafv2request_p.h"
#include "listloggingconfigurationsrequest.h"

namespace QtAws {
namespace Wafv2 {

class ListLoggingConfigurationsRequest;

class ListLoggingConfigurationsRequestPrivate : public Wafv2RequestPrivate {

public:
    ListLoggingConfigurationsRequestPrivate(const Wafv2Request::Action action,
                                   ListLoggingConfigurationsRequest * const q);
    ListLoggingConfigurationsRequestPrivate(const ListLoggingConfigurationsRequestPrivate &other,
                                   ListLoggingConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListLoggingConfigurationsRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
