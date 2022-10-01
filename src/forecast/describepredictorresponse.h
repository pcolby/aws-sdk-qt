// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPREDICTORRESPONSE_H
#define QTAWS_DESCRIBEPREDICTORRESPONSE_H

#include "forecastresponse.h"
#include "describepredictorrequest.h"

namespace QtAws {
namespace Forecast {

class DescribePredictorResponsePrivate;

class QTAWSFORECAST_EXPORT DescribePredictorResponse : public ForecastResponse {
    Q_OBJECT

public:
    DescribePredictorResponse(const DescribePredictorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePredictorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePredictorResponse)
    Q_DISABLE_COPY(DescribePredictorResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif
