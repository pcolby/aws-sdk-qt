// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTMETRICSETCONFIGRESPONSE_H
#define QTAWS_DETECTMETRICSETCONFIGRESPONSE_H

#include "lookoutmetricsresponse.h"
#include "detectmetricsetconfigrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class DetectMetricSetConfigResponsePrivate;

class QTAWSLOOKOUTMETRICS_EXPORT DetectMetricSetConfigResponse : public LookoutMetricsResponse {
    Q_OBJECT

public:
    DetectMetricSetConfigResponse(const DetectMetricSetConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DetectMetricSetConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetectMetricSetConfigResponse)
    Q_DISABLE_COPY(DetectMetricSetConfigResponse)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
