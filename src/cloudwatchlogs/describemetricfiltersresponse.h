// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMETRICFILTERSRESPONSE_H
#define QTAWS_DESCRIBEMETRICFILTERSRESPONSE_H

#include "cloudwatchlogsresponse.h"
#include "describemetricfiltersrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DescribeMetricFiltersResponsePrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT DescribeMetricFiltersResponse : public CloudWatchLogsResponse {
    Q_OBJECT

public:
    DescribeMetricFiltersResponse(const DescribeMetricFiltersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeMetricFiltersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMetricFiltersResponse)
    Q_DISABLE_COPY(DescribeMetricFiltersResponse)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
