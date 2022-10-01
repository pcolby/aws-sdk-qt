// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLOGGINGCONFIGURATIONSREQUEST_P_H
#define QTAWS_LISTLOGGINGCONFIGURATIONSREQUEST_P_H

#include "wafrequest_p.h"
#include "listloggingconfigurationsrequest.h"

namespace QtAws {
namespace Waf {

class ListLoggingConfigurationsRequest;

class ListLoggingConfigurationsRequestPrivate : public WafRequestPrivate {

public:
    ListLoggingConfigurationsRequestPrivate(const WafRequest::Action action,
                                   ListLoggingConfigurationsRequest * const q);
    ListLoggingConfigurationsRequestPrivate(const ListLoggingConfigurationsRequestPrivate &other,
                                   ListLoggingConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListLoggingConfigurationsRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
