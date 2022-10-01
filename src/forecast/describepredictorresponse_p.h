// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPREDICTORRESPONSE_P_H
#define QTAWS_DESCRIBEPREDICTORRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class DescribePredictorResponse;

class DescribePredictorResponsePrivate : public ForecastResponsePrivate {

public:

    explicit DescribePredictorResponsePrivate(DescribePredictorResponse * const q);

    void parseDescribePredictorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribePredictorResponse)
    Q_DISABLE_COPY(DescribePredictorResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
