// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACTIVATEANOMALYDETECTORRESPONSE_H
#define QTAWS_ACTIVATEANOMALYDETECTORRESPONSE_H

#include "lookoutmetricsresponse.h"
#include "activateanomalydetectorrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class ActivateAnomalyDetectorResponsePrivate;

class QTAWSLOOKOUTMETRICS_EXPORT ActivateAnomalyDetectorResponse : public LookoutMetricsResponse {
    Q_OBJECT

public:
    ActivateAnomalyDetectorResponse(const ActivateAnomalyDetectorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ActivateAnomalyDetectorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ActivateAnomalyDetectorResponse)
    Q_DISABLE_COPY(ActivateAnomalyDetectorResponse)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
