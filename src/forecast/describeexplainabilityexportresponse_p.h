// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXPLAINABILITYEXPORTRESPONSE_P_H
#define QTAWS_DESCRIBEEXPLAINABILITYEXPORTRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class DescribeExplainabilityExportResponse;

class DescribeExplainabilityExportResponsePrivate : public ForecastResponsePrivate {

public:

    explicit DescribeExplainabilityExportResponsePrivate(DescribeExplainabilityExportResponse * const q);

    void parseDescribeExplainabilityExportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeExplainabilityExportResponse)
    Q_DISABLE_COPY(DescribeExplainabilityExportResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
