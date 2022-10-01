// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEANOMALYDETECTORSRESPONSE_H
#define QTAWS_DESCRIBEANOMALYDETECTORSRESPONSE_H

#include "cloudwatchresponse.h"
#include "describeanomalydetectorsrequest.h"

namespace QtAws {
namespace CloudWatch {

class DescribeAnomalyDetectorsResponsePrivate;

class QTAWSCLOUDWATCH_EXPORT DescribeAnomalyDetectorsResponse : public CloudWatchResponse {
    Q_OBJECT

public:
    DescribeAnomalyDetectorsResponse(const DescribeAnomalyDetectorsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAnomalyDetectorsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAnomalyDetectorsResponse)
    Q_DISABLE_COPY(DescribeAnomalyDetectorsResponse)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
