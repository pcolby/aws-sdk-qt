// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWHATIFANALYSISRESPONSE_P_H
#define QTAWS_DESCRIBEWHATIFANALYSISRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class DescribeWhatIfAnalysisResponse;

class DescribeWhatIfAnalysisResponsePrivate : public ForecastResponsePrivate {

public:

    explicit DescribeWhatIfAnalysisResponsePrivate(DescribeWhatIfAnalysisResponse * const q);

    void parseDescribeWhatIfAnalysisResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeWhatIfAnalysisResponse)
    Q_DISABLE_COPY(DescribeWhatIfAnalysisResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
