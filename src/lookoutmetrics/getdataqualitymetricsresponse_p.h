// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATAQUALITYMETRICSRESPONSE_P_H
#define QTAWS_GETDATAQUALITYMETRICSRESPONSE_P_H

#include "lookoutmetricsresponse_p.h"

namespace QtAws {
namespace LookoutMetrics {

class GetDataQualityMetricsResponse;

class GetDataQualityMetricsResponsePrivate : public LookoutMetricsResponsePrivate {

public:

    explicit GetDataQualityMetricsResponsePrivate(GetDataQualityMetricsResponse * const q);

    void parseGetDataQualityMetricsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDataQualityMetricsResponse)
    Q_DISABLE_COPY(GetDataQualityMetricsResponsePrivate)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
