// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTANOMALYGROUPSUMMARIESRESPONSE_H
#define QTAWS_LISTANOMALYGROUPSUMMARIESRESPONSE_H

#include "lookoutmetricsresponse.h"
#include "listanomalygroupsummariesrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class ListAnomalyGroupSummariesResponsePrivate;

class QTAWSLOOKOUTMETRICS_EXPORT ListAnomalyGroupSummariesResponse : public LookoutMetricsResponse {
    Q_OBJECT

public:
    ListAnomalyGroupSummariesResponse(const ListAnomalyGroupSummariesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAnomalyGroupSummariesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAnomalyGroupSummariesResponse)
    Q_DISABLE_COPY(ListAnomalyGroupSummariesResponse)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
