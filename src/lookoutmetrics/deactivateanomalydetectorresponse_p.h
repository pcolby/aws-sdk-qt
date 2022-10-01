// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEACTIVATEANOMALYDETECTORRESPONSE_P_H
#define QTAWS_DEACTIVATEANOMALYDETECTORRESPONSE_P_H

#include "lookoutmetricsresponse_p.h"

namespace QtAws {
namespace LookoutMetrics {

class DeactivateAnomalyDetectorResponse;

class DeactivateAnomalyDetectorResponsePrivate : public LookoutMetricsResponsePrivate {

public:

    explicit DeactivateAnomalyDetectorResponsePrivate(DeactivateAnomalyDetectorResponse * const q);

    void parseDeactivateAnomalyDetectorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeactivateAnomalyDetectorResponse)
    Q_DISABLE_COPY(DeactivateAnomalyDetectorResponsePrivate)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
