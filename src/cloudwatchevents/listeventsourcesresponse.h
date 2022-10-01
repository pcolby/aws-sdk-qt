// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTSOURCESRESPONSE_H
#define QTAWS_LISTEVENTSOURCESRESPONSE_H

#include "cloudwatcheventsresponse.h"
#include "listeventsourcesrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class ListEventSourcesResponsePrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT ListEventSourcesResponse : public CloudWatchEventsResponse {
    Q_OBJECT

public:
    ListEventSourcesResponse(const ListEventSourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListEventSourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEventSourcesResponse)
    Q_DISABLE_COPY(ListEventSourcesResponse)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
