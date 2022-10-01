// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMETRICSTATISTICSRESPONSE_H
#define QTAWS_GETMETRICSTATISTICSRESPONSE_H

#include "cloudwatchresponse.h"
#include "getmetricstatisticsrequest.h"

namespace QtAws {
namespace CloudWatch {

class GetMetricStatisticsResponsePrivate;

class QTAWSCLOUDWATCH_EXPORT GetMetricStatisticsResponse : public CloudWatchResponse {
    Q_OBJECT

public:
    GetMetricStatisticsResponse(const GetMetricStatisticsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMetricStatisticsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMetricStatisticsResponse)
    Q_DISABLE_COPY(GetMetricStatisticsResponse)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
