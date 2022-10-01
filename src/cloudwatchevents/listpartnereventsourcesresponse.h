// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPARTNEREVENTSOURCESRESPONSE_H
#define QTAWS_LISTPARTNEREVENTSOURCESRESPONSE_H

#include "cloudwatcheventsresponse.h"
#include "listpartnereventsourcesrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class ListPartnerEventSourcesResponsePrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT ListPartnerEventSourcesResponse : public CloudWatchEventsResponse {
    Q_OBJECT

public:
    ListPartnerEventSourcesResponse(const ListPartnerEventSourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPartnerEventSourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPartnerEventSourcesResponse)
    Q_DISABLE_COPY(ListPartnerEventSourcesResponse)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
