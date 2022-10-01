// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWHATIFANALYSISREQUEST_P_H
#define QTAWS_DESCRIBEWHATIFANALYSISREQUEST_P_H

#include "forecastrequest_p.h"
#include "describewhatifanalysisrequest.h"

namespace QtAws {
namespace Forecast {

class DescribeWhatIfAnalysisRequest;

class DescribeWhatIfAnalysisRequestPrivate : public ForecastRequestPrivate {

public:
    DescribeWhatIfAnalysisRequestPrivate(const ForecastRequest::Action action,
                                   DescribeWhatIfAnalysisRequest * const q);
    DescribeWhatIfAnalysisRequestPrivate(const DescribeWhatIfAnalysisRequestPrivate &other,
                                   DescribeWhatIfAnalysisRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeWhatIfAnalysisRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
