// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BACKTESTANOMALYDETECTORRESPONSE_H
#define QTAWS_BACKTESTANOMALYDETECTORRESPONSE_H

#include "lookoutmetricsresponse.h"
#include "backtestanomalydetectorrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class BackTestAnomalyDetectorResponsePrivate;

class QTAWSLOOKOUTMETRICS_EXPORT BackTestAnomalyDetectorResponse : public LookoutMetricsResponse {
    Q_OBJECT

public:
    BackTestAnomalyDetectorResponse(const BackTestAnomalyDetectorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BackTestAnomalyDetectorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BackTestAnomalyDetectorResponse)
    Q_DISABLE_COPY(BackTestAnomalyDetectorResponse)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
