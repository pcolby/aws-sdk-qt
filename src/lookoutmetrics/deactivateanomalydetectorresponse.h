// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEACTIVATEANOMALYDETECTORRESPONSE_H
#define QTAWS_DEACTIVATEANOMALYDETECTORRESPONSE_H

#include "lookoutmetricsresponse.h"
#include "deactivateanomalydetectorrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class DeactivateAnomalyDetectorResponsePrivate;

class QTAWSLOOKOUTMETRICS_EXPORT DeactivateAnomalyDetectorResponse : public LookoutMetricsResponse {
    Q_OBJECT

public:
    DeactivateAnomalyDetectorResponse(const DeactivateAnomalyDetectorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeactivateAnomalyDetectorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeactivateAnomalyDetectorResponse)
    Q_DISABLE_COPY(DeactivateAnomalyDetectorResponse)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
