// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXPLAINABILITYEXPORTSRESPONSE_P_H
#define QTAWS_LISTEXPLAINABILITYEXPORTSRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class ListExplainabilityExportsResponse;

class ListExplainabilityExportsResponsePrivate : public ForecastResponsePrivate {

public:

    explicit ListExplainabilityExportsResponsePrivate(ListExplainabilityExportsResponse * const q);

    void parseListExplainabilityExportsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListExplainabilityExportsResponse)
    Q_DISABLE_COPY(ListExplainabilityExportsResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
