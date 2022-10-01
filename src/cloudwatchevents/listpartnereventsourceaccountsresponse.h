// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPARTNEREVENTSOURCEACCOUNTSRESPONSE_H
#define QTAWS_LISTPARTNEREVENTSOURCEACCOUNTSRESPONSE_H

#include "cloudwatcheventsresponse.h"
#include "listpartnereventsourceaccountsrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class ListPartnerEventSourceAccountsResponsePrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT ListPartnerEventSourceAccountsResponse : public CloudWatchEventsResponse {
    Q_OBJECT

public:
    ListPartnerEventSourceAccountsResponse(const ListPartnerEventSourceAccountsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPartnerEventSourceAccountsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPartnerEventSourceAccountsResponse)
    Q_DISABLE_COPY(ListPartnerEventSourceAccountsResponse)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
