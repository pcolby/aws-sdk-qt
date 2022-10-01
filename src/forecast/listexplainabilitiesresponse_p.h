// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXPLAINABILITIESRESPONSE_P_H
#define QTAWS_LISTEXPLAINABILITIESRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class ListExplainabilitiesResponse;

class ListExplainabilitiesResponsePrivate : public ForecastResponsePrivate {

public:

    explicit ListExplainabilitiesResponsePrivate(ListExplainabilitiesResponse * const q);

    void parseListExplainabilitiesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListExplainabilitiesResponse)
    Q_DISABLE_COPY(ListExplainabilitiesResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
