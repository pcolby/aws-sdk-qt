// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPARTNEREVENTSOURCEACCOUNTSRESPONSE_P_H
#define QTAWS_LISTPARTNEREVENTSOURCEACCOUNTSRESPONSE_P_H

#include "cloudwatcheventsresponse_p.h"

namespace QtAws {
namespace CloudWatchEvents {

class ListPartnerEventSourceAccountsResponse;

class ListPartnerEventSourceAccountsResponsePrivate : public CloudWatchEventsResponsePrivate {

public:

    explicit ListPartnerEventSourceAccountsResponsePrivate(ListPartnerEventSourceAccountsResponse * const q);

    void parseListPartnerEventSourceAccountsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPartnerEventSourceAccountsResponse)
    Q_DISABLE_COPY(ListPartnerEventSourceAccountsResponsePrivate)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
