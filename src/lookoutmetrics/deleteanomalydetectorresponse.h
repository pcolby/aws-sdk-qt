// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEANOMALYDETECTORRESPONSE_H
#define QTAWS_DELETEANOMALYDETECTORRESPONSE_H

#include "lookoutmetricsresponse.h"
#include "deleteanomalydetectorrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class DeleteAnomalyDetectorResponsePrivate;

class QTAWSLOOKOUTMETRICS_EXPORT DeleteAnomalyDetectorResponse : public LookoutMetricsResponse {
    Q_OBJECT

public:
    DeleteAnomalyDetectorResponse(const DeleteAnomalyDetectorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAnomalyDetectorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAnomalyDetectorResponse)
    Q_DISABLE_COPY(DeleteAnomalyDetectorResponse)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
