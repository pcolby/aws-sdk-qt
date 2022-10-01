// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTANOMALYDETECTORSRESPONSE_H
#define QTAWS_LISTANOMALYDETECTORSRESPONSE_H

#include "lookoutmetricsresponse.h"
#include "listanomalydetectorsrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class ListAnomalyDetectorsResponsePrivate;

class QTAWSLOOKOUTMETRICS_EXPORT ListAnomalyDetectorsResponse : public LookoutMetricsResponse {
    Q_OBJECT

public:
    ListAnomalyDetectorsResponse(const ListAnomalyDetectorsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAnomalyDetectorsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAnomalyDetectorsResponse)
    Q_DISABLE_COPY(ListAnomalyDetectorsResponse)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
