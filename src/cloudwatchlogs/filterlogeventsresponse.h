// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FILTERLOGEVENTSRESPONSE_H
#define QTAWS_FILTERLOGEVENTSRESPONSE_H

#include "cloudwatchlogsresponse.h"
#include "filterlogeventsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class FilterLogEventsResponsePrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT FilterLogEventsResponse : public CloudWatchLogsResponse {
    Q_OBJECT

public:
    FilterLogEventsResponse(const FilterLogEventsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const FilterLogEventsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(FilterLogEventsResponse)
    Q_DISABLE_COPY(FilterLogEventsResponse)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
