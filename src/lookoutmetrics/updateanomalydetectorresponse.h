// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEANOMALYDETECTORRESPONSE_H
#define QTAWS_UPDATEANOMALYDETECTORRESPONSE_H

#include "lookoutmetricsresponse.h"
#include "updateanomalydetectorrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class UpdateAnomalyDetectorResponsePrivate;

class QTAWSLOOKOUTMETRICS_EXPORT UpdateAnomalyDetectorResponse : public LookoutMetricsResponse {
    Q_OBJECT

public:
    UpdateAnomalyDetectorResponse(const UpdateAnomalyDetectorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAnomalyDetectorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAnomalyDetectorResponse)
    Q_DISABLE_COPY(UpdateAnomalyDetectorResponse)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
