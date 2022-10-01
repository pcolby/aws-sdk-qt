// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEANOMALYDETECTORRESPONSE_P_H
#define QTAWS_CREATEANOMALYDETECTORRESPONSE_P_H

#include "lookoutmetricsresponse_p.h"

namespace QtAws {
namespace LookoutMetrics {

class CreateAnomalyDetectorResponse;

class CreateAnomalyDetectorResponsePrivate : public LookoutMetricsResponsePrivate {

public:

    explicit CreateAnomalyDetectorResponsePrivate(CreateAnomalyDetectorResponse * const q);

    void parseCreateAnomalyDetectorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAnomalyDetectorResponse)
    Q_DISABLE_COPY(CreateAnomalyDetectorResponsePrivate)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
