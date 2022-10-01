// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACTIVATEANOMALYDETECTORRESPONSE_P_H
#define QTAWS_ACTIVATEANOMALYDETECTORRESPONSE_P_H

#include "lookoutmetricsresponse_p.h"

namespace QtAws {
namespace LookoutMetrics {

class ActivateAnomalyDetectorResponse;

class ActivateAnomalyDetectorResponsePrivate : public LookoutMetricsResponsePrivate {

public:

    explicit ActivateAnomalyDetectorResponsePrivate(ActivateAnomalyDetectorResponse * const q);

    void parseActivateAnomalyDetectorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ActivateAnomalyDetectorResponse)
    Q_DISABLE_COPY(ActivateAnomalyDetectorResponsePrivate)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
