// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMETRICSETRESPONSE_P_H
#define QTAWS_CREATEMETRICSETRESPONSE_P_H

#include "lookoutmetricsresponse_p.h"

namespace QtAws {
namespace LookoutMetrics {

class CreateMetricSetResponse;

class CreateMetricSetResponsePrivate : public LookoutMetricsResponsePrivate {

public:

    explicit CreateMetricSetResponsePrivate(CreateMetricSetResponse * const q);

    void parseCreateMetricSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateMetricSetResponse)
    Q_DISABLE_COPY(CreateMetricSetResponsePrivate)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
