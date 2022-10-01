// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEANOMALYDETECTIONEXECUTIONSRESPONSE_H
#define QTAWS_DESCRIBEANOMALYDETECTIONEXECUTIONSRESPONSE_H

#include "lookoutmetricsresponse.h"
#include "describeanomalydetectionexecutionsrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class DescribeAnomalyDetectionExecutionsResponsePrivate;

class QTAWSLOOKOUTMETRICS_EXPORT DescribeAnomalyDetectionExecutionsResponse : public LookoutMetricsResponse {
    Q_OBJECT

public:
    DescribeAnomalyDetectionExecutionsResponse(const DescribeAnomalyDetectionExecutionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAnomalyDetectionExecutionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAnomalyDetectionExecutionsResponse)
    Q_DISABLE_COPY(DescribeAnomalyDetectionExecutionsResponse)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
