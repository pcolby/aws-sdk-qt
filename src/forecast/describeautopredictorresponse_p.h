// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUTOPREDICTORRESPONSE_P_H
#define QTAWS_DESCRIBEAUTOPREDICTORRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class DescribeAutoPredictorResponse;

class DescribeAutoPredictorResponsePrivate : public ForecastResponsePrivate {

public:

    explicit DescribeAutoPredictorResponsePrivate(DescribeAutoPredictorResponse * const q);

    void parseDescribeAutoPredictorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAutoPredictorResponse)
    Q_DISABLE_COPY(DescribeAutoPredictorResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
