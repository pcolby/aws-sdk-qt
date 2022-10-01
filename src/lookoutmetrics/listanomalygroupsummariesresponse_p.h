// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTANOMALYGROUPSUMMARIESRESPONSE_P_H
#define QTAWS_LISTANOMALYGROUPSUMMARIESRESPONSE_P_H

#include "lookoutmetricsresponse_p.h"

namespace QtAws {
namespace LookoutMetrics {

class ListAnomalyGroupSummariesResponse;

class ListAnomalyGroupSummariesResponsePrivate : public LookoutMetricsResponsePrivate {

public:

    explicit ListAnomalyGroupSummariesResponsePrivate(ListAnomalyGroupSummariesResponse * const q);

    void parseListAnomalyGroupSummariesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAnomalyGroupSummariesResponse)
    Q_DISABLE_COPY(ListAnomalyGroupSummariesResponsePrivate)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
