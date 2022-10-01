// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPREDICTORRESPONSE_P_H
#define QTAWS_DELETEPREDICTORRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class DeletePredictorResponse;

class DeletePredictorResponsePrivate : public ForecastResponsePrivate {

public:

    explicit DeletePredictorResponsePrivate(DeletePredictorResponse * const q);

    void parseDeletePredictorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePredictorResponse)
    Q_DISABLE_COPY(DeletePredictorResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
