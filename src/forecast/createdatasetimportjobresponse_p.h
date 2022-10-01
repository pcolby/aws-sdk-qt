// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASETIMPORTJOBRESPONSE_P_H
#define QTAWS_CREATEDATASETIMPORTJOBRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class CreateDatasetImportJobResponse;

class CreateDatasetImportJobResponsePrivate : public ForecastResponsePrivate {

public:

    explicit CreateDatasetImportJobResponsePrivate(CreateDatasetImportJobResponse * const q);

    void parseCreateDatasetImportJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDatasetImportJobResponse)
    Q_DISABLE_COPY(CreateDatasetImportJobResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
