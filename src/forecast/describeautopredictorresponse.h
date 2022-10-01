// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUTOPREDICTORRESPONSE_H
#define QTAWS_DESCRIBEAUTOPREDICTORRESPONSE_H

#include "forecastresponse.h"
#include "describeautopredictorrequest.h"

namespace QtAws {
namespace Forecast {

class DescribeAutoPredictorResponsePrivate;

class QTAWSFORECAST_EXPORT DescribeAutoPredictorResponse : public ForecastResponse {
    Q_OBJECT

public:
    DescribeAutoPredictorResponse(const DescribeAutoPredictorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAutoPredictorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAutoPredictorResponse)
    Q_DISABLE_COPY(DescribeAutoPredictorResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif
