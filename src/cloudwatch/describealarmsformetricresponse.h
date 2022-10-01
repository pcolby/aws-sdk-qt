// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEALARMSFORMETRICRESPONSE_H
#define QTAWS_DESCRIBEALARMSFORMETRICRESPONSE_H

#include "cloudwatchresponse.h"
#include "describealarmsformetricrequest.h"

namespace QtAws {
namespace CloudWatch {

class DescribeAlarmsForMetricResponsePrivate;

class QTAWSCLOUDWATCH_EXPORT DescribeAlarmsForMetricResponse : public CloudWatchResponse {
    Q_OBJECT

public:
    DescribeAlarmsForMetricResponse(const DescribeAlarmsForMetricRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAlarmsForMetricRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAlarmsForMetricResponse)
    Q_DISABLE_COPY(DescribeAlarmsForMetricResponse)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
