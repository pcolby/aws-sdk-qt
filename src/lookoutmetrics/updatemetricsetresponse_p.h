// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMETRICSETRESPONSE_P_H
#define QTAWS_UPDATEMETRICSETRESPONSE_P_H

#include "lookoutmetricsresponse_p.h"

namespace QtAws {
namespace LookoutMetrics {

class UpdateMetricSetResponse;

class UpdateMetricSetResponsePrivate : public LookoutMetricsResponsePrivate {

public:

    explicit UpdateMetricSetResponsePrivate(UpdateMetricSetResponse * const q);

    void parseUpdateMetricSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateMetricSetResponse)
    Q_DISABLE_COPY(UpdateMetricSetResponsePrivate)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
