// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLOGGINGCONFIGURATIONSREQUEST_P_H
#define QTAWS_LISTLOGGINGCONFIGURATIONSREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "listloggingconfigurationsrequest.h"

namespace QtAws {
namespace WafRegional {

class ListLoggingConfigurationsRequest;

class ListLoggingConfigurationsRequestPrivate : public WafRegionalRequestPrivate {

public:
    ListLoggingConfigurationsRequestPrivate(const WafRegionalRequest::Action action,
                                   ListLoggingConfigurationsRequest * const q);
    ListLoggingConfigurationsRequestPrivate(const ListLoggingConfigurationsRequestPrivate &other,
                                   ListLoggingConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListLoggingConfigurationsRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
