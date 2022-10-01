// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXPLAINABILITYRESPONSE_P_H
#define QTAWS_DESCRIBEEXPLAINABILITYRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class DescribeExplainabilityResponse;

class DescribeExplainabilityResponsePrivate : public ForecastResponsePrivate {

public:

    explicit DescribeExplainabilityResponsePrivate(DescribeExplainabilityResponse * const q);

    void parseDescribeExplainabilityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeExplainabilityResponse)
    Q_DISABLE_COPY(DescribeExplainabilityResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
