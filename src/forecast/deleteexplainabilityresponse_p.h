// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEXPLAINABILITYRESPONSE_P_H
#define QTAWS_DELETEEXPLAINABILITYRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class DeleteExplainabilityResponse;

class DeleteExplainabilityResponsePrivate : public ForecastResponsePrivate {

public:

    explicit DeleteExplainabilityResponsePrivate(DeleteExplainabilityResponse * const q);

    void parseDeleteExplainabilityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteExplainabilityResponse)
    Q_DISABLE_COPY(DeleteExplainabilityResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
