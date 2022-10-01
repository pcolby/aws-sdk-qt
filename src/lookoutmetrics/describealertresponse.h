// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEALERTRESPONSE_H
#define QTAWS_DESCRIBEALERTRESPONSE_H

#include "lookoutmetricsresponse.h"
#include "describealertrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class DescribeAlertResponsePrivate;

class QTAWSLOOKOUTMETRICS_EXPORT DescribeAlertResponse : public LookoutMetricsResponse {
    Q_OBJECT

public:
    DescribeAlertResponse(const DescribeAlertRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAlertRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAlertResponse)
    Q_DISABLE_COPY(DescribeAlertResponse)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
