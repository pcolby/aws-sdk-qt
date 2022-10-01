// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAUTOPREDICTORRESPONSE_P_H
#define QTAWS_CREATEAUTOPREDICTORRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class CreateAutoPredictorResponse;

class CreateAutoPredictorResponsePrivate : public ForecastResponsePrivate {

public:

    explicit CreateAutoPredictorResponsePrivate(CreateAutoPredictorResponse * const q);

    void parseCreateAutoPredictorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAutoPredictorResponse)
    Q_DISABLE_COPY(CreateAutoPredictorResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
