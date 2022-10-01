// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEANOMALYDETECTORRESPONSE_H
#define QTAWS_DESCRIBEANOMALYDETECTORRESPONSE_H

#include "lookoutmetricsresponse.h"
#include "describeanomalydetectorrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class DescribeAnomalyDetectorResponsePrivate;

class QTAWSLOOKOUTMETRICS_EXPORT DescribeAnomalyDetectorResponse : public LookoutMetricsResponse {
    Q_OBJECT

public:
    DescribeAnomalyDetectorResponse(const DescribeAnomalyDetectorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAnomalyDetectorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAnomalyDetectorResponse)
    Q_DISABLE_COPY(DescribeAnomalyDetectorResponse)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
