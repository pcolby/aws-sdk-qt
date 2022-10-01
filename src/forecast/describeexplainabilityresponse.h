// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXPLAINABILITYRESPONSE_H
#define QTAWS_DESCRIBEEXPLAINABILITYRESPONSE_H

#include "forecastresponse.h"
#include "describeexplainabilityrequest.h"

namespace QtAws {
namespace Forecast {

class DescribeExplainabilityResponsePrivate;

class QTAWSFORECAST_EXPORT DescribeExplainabilityResponse : public ForecastResponse {
    Q_OBJECT

public:
    DescribeExplainabilityResponse(const DescribeExplainabilityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeExplainabilityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeExplainabilityResponse)
    Q_DISABLE_COPY(DescribeExplainabilityResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif
