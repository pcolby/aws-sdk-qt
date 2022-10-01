// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMETRICFILTERRESPONSE_H
#define QTAWS_PUTMETRICFILTERRESPONSE_H

#include "cloudwatchlogsresponse.h"
#include "putmetricfilterrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class PutMetricFilterResponsePrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT PutMetricFilterResponse : public CloudWatchLogsResponse {
    Q_OBJECT

public:
    PutMetricFilterResponse(const PutMetricFilterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutMetricFilterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutMetricFilterResponse)
    Q_DISABLE_COPY(PutMetricFilterResponse)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
