// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTMETRICSETCONFIGRESPONSE_P_H
#define QTAWS_DETECTMETRICSETCONFIGRESPONSE_P_H

#include "lookoutmetricsresponse_p.h"

namespace QtAws {
namespace LookoutMetrics {

class DetectMetricSetConfigResponse;

class DetectMetricSetConfigResponsePrivate : public LookoutMetricsResponsePrivate {

public:

    explicit DetectMetricSetConfigResponsePrivate(DetectMetricSetConfigResponse * const q);

    void parseDetectMetricSetConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DetectMetricSetConfigResponse)
    Q_DISABLE_COPY(DetectMetricSetConfigResponsePrivate)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
