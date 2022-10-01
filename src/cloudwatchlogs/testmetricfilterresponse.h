// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTMETRICFILTERRESPONSE_H
#define QTAWS_TESTMETRICFILTERRESPONSE_H

#include "cloudwatchlogsresponse.h"
#include "testmetricfilterrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class TestMetricFilterResponsePrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT TestMetricFilterResponse : public CloudWatchLogsResponse {
    Q_OBJECT

public:
    TestMetricFilterResponse(const TestMetricFilterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TestMetricFilterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TestMetricFilterResponse)
    Q_DISABLE_COPY(TestMetricFilterResponse)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
