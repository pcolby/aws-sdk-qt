// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMETRICSETSRESPONSE_P_H
#define QTAWS_LISTMETRICSETSRESPONSE_P_H

#include "lookoutmetricsresponse_p.h"

namespace QtAws {
namespace LookoutMetrics {

class ListMetricSetsResponse;

class ListMetricSetsResponsePrivate : public LookoutMetricsResponsePrivate {

public:

    explicit ListMetricSetsResponsePrivate(ListMetricSetsResponse * const q);

    void parseListMetricSetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListMetricSetsResponse)
    Q_DISABLE_COPY(ListMetricSetsResponsePrivate)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
