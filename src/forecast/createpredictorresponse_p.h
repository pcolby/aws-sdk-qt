// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPREDICTORRESPONSE_P_H
#define QTAWS_CREATEPREDICTORRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class CreatePredictorResponse;

class CreatePredictorResponsePrivate : public ForecastResponsePrivate {

public:

    explicit CreatePredictorResponsePrivate(CreatePredictorResponse * const q);

    void parseCreatePredictorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePredictorResponse)
    Q_DISABLE_COPY(CreatePredictorResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
