// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSAGEFORECASTRESPONSE_P_H
#define QTAWS_GETUSAGEFORECASTRESPONSE_P_H

#include "costexplorerresponse_p.h"

namespace QtAws {
namespace CostExplorer {

class GetUsageForecastResponse;

class GetUsageForecastResponsePrivate : public CostExplorerResponsePrivate {

public:

    explicit GetUsageForecastResponsePrivate(GetUsageForecastResponse * const q);

    void parseGetUsageForecastResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetUsageForecastResponse)
    Q_DISABLE_COPY(GetUsageForecastResponsePrivate)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
