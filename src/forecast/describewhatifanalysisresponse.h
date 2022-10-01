// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWHATIFANALYSISRESPONSE_H
#define QTAWS_DESCRIBEWHATIFANALYSISRESPONSE_H

#include "forecastresponse.h"
#include "describewhatifanalysisrequest.h"

namespace QtAws {
namespace Forecast {

class DescribeWhatIfAnalysisResponsePrivate;

class QTAWSFORECAST_EXPORT DescribeWhatIfAnalysisResponse : public ForecastResponse {
    Q_OBJECT

public:
    DescribeWhatIfAnalysisResponse(const DescribeWhatIfAnalysisRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeWhatIfAnalysisRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeWhatIfAnalysisResponse)
    Q_DISABLE_COPY(DescribeWhatIfAnalysisResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif
