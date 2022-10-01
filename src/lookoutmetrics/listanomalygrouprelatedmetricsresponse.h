// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTANOMALYGROUPRELATEDMETRICSRESPONSE_H
#define QTAWS_LISTANOMALYGROUPRELATEDMETRICSRESPONSE_H

#include "lookoutmetricsresponse.h"
#include "listanomalygrouprelatedmetricsrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class ListAnomalyGroupRelatedMetricsResponsePrivate;

class QTAWSLOOKOUTMETRICS_EXPORT ListAnomalyGroupRelatedMetricsResponse : public LookoutMetricsResponse {
    Q_OBJECT

public:
    ListAnomalyGroupRelatedMetricsResponse(const ListAnomalyGroupRelatedMetricsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAnomalyGroupRelatedMetricsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAnomalyGroupRelatedMetricsResponse)
    Q_DISABLE_COPY(ListAnomalyGroupRelatedMetricsResponse)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
