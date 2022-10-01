// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEANOMALYDETECTORRESPONSE_H
#define QTAWS_CREATEANOMALYDETECTORRESPONSE_H

#include "lookoutmetricsresponse.h"
#include "createanomalydetectorrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class CreateAnomalyDetectorResponsePrivate;

class QTAWSLOOKOUTMETRICS_EXPORT CreateAnomalyDetectorResponse : public LookoutMetricsResponse {
    Q_OBJECT

public:
    CreateAnomalyDetectorResponse(const CreateAnomalyDetectorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAnomalyDetectorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAnomalyDetectorResponse)
    Q_DISABLE_COPY(CreateAnomalyDetectorResponse)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
