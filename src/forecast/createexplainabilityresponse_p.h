// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXPLAINABILITYRESPONSE_P_H
#define QTAWS_CREATEEXPLAINABILITYRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class CreateExplainabilityResponse;

class CreateExplainabilityResponsePrivate : public ForecastResponsePrivate {

public:

    explicit CreateExplainabilityResponsePrivate(CreateExplainabilityResponse * const q);

    void parseCreateExplainabilityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateExplainabilityResponse)
    Q_DISABLE_COPY(CreateExplainabilityResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
