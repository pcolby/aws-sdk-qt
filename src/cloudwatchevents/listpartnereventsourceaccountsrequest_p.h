// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPARTNEREVENTSOURCEACCOUNTSREQUEST_P_H
#define QTAWS_LISTPARTNEREVENTSOURCEACCOUNTSREQUEST_P_H

#include "cloudwatcheventsrequest_p.h"
#include "listpartnereventsourceaccountsrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class ListPartnerEventSourceAccountsRequest;

class ListPartnerEventSourceAccountsRequestPrivate : public CloudWatchEventsRequestPrivate {

public:
    ListPartnerEventSourceAccountsRequestPrivate(const CloudWatchEventsRequest::Action action,
                                   ListPartnerEventSourceAccountsRequest * const q);
    ListPartnerEventSourceAccountsRequestPrivate(const ListPartnerEventSourceAccountsRequestPrivate &other,
                                   ListPartnerEventSourceAccountsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPartnerEventSourceAccountsRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
