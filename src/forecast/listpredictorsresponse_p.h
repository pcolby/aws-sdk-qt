// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPREDICTORSRESPONSE_P_H
#define QTAWS_LISTPREDICTORSRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class ListPredictorsResponse;

class ListPredictorsResponsePrivate : public ForecastResponsePrivate {

public:

    explicit ListPredictorsResponsePrivate(ListPredictorsResponse * const q);

    void parseListPredictorsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPredictorsResponse)
    Q_DISABLE_COPY(ListPredictorsResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
