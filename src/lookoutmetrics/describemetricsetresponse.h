// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMETRICSETRESPONSE_H
#define QTAWS_DESCRIBEMETRICSETRESPONSE_H

#include "lookoutmetricsresponse.h"
#include "describemetricsetrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class DescribeMetricSetResponsePrivate;

class QTAWSLOOKOUTMETRICS_EXPORT DescribeMetricSetResponse : public LookoutMetricsResponse {
    Q_OBJECT

public:
    DescribeMetricSetResponse(const DescribeMetricSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeMetricSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMetricSetResponse)
    Q_DISABLE_COPY(DescribeMetricSetResponse)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
