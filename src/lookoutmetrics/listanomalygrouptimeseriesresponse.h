// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTANOMALYGROUPTIMESERIESRESPONSE_H
#define QTAWS_LISTANOMALYGROUPTIMESERIESRESPONSE_H

#include "lookoutmetricsresponse.h"
#include "listanomalygrouptimeseriesrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class ListAnomalyGroupTimeSeriesResponsePrivate;

class QTAWSLOOKOUTMETRICS_EXPORT ListAnomalyGroupTimeSeriesResponse : public LookoutMetricsResponse {
    Q_OBJECT

public:
    ListAnomalyGroupTimeSeriesResponse(const ListAnomalyGroupTimeSeriesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAnomalyGroupTimeSeriesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAnomalyGroupTimeSeriesResponse)
    Q_DISABLE_COPY(ListAnomalyGroupTimeSeriesResponse)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
