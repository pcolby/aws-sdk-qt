// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTANOMALYGROUPRELATEDMETRICSRESPONSE_P_H
#define QTAWS_LISTANOMALYGROUPRELATEDMETRICSRESPONSE_P_H

#include "lookoutmetricsresponse_p.h"

namespace QtAws {
namespace LookoutMetrics {

class ListAnomalyGroupRelatedMetricsResponse;

class ListAnomalyGroupRelatedMetricsResponsePrivate : public LookoutMetricsResponsePrivate {

public:

    explicit ListAnomalyGroupRelatedMetricsResponsePrivate(ListAnomalyGroupRelatedMetricsResponse * const q);

    void parseListAnomalyGroupRelatedMetricsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAnomalyGroupRelatedMetricsResponse)
    Q_DISABLE_COPY(ListAnomalyGroupRelatedMetricsResponsePrivate)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
