// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEXPLAINABILITYEXPORTRESPONSE_P_H
#define QTAWS_DELETEEXPLAINABILITYEXPORTRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class DeleteExplainabilityExportResponse;

class DeleteExplainabilityExportResponsePrivate : public ForecastResponsePrivate {

public:

    explicit DeleteExplainabilityExportResponsePrivate(DeleteExplainabilityExportResponse * const q);

    void parseDeleteExplainabilityExportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteExplainabilityExportResponse)
    Q_DISABLE_COPY(DeleteExplainabilityExportResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
