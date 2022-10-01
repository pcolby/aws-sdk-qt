// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEANOMALYDETECTORRESPONSE_P_H
#define QTAWS_UPDATEANOMALYDETECTORRESPONSE_P_H

#include "lookoutmetricsresponse_p.h"

namespace QtAws {
namespace LookoutMetrics {

class UpdateAnomalyDetectorResponse;

class UpdateAnomalyDetectorResponsePrivate : public LookoutMetricsResponsePrivate {

public:

    explicit UpdateAnomalyDetectorResponsePrivate(UpdateAnomalyDetectorResponse * const q);

    void parseUpdateAnomalyDetectorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAnomalyDetectorResponse)
    Q_DISABLE_COPY(UpdateAnomalyDetectorResponsePrivate)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
