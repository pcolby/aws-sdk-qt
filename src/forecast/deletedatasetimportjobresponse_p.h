// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATASETIMPORTJOBRESPONSE_P_H
#define QTAWS_DELETEDATASETIMPORTJOBRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class DeleteDatasetImportJobResponse;

class DeleteDatasetImportJobResponsePrivate : public ForecastResponsePrivate {

public:

    explicit DeleteDatasetImportJobResponsePrivate(DeleteDatasetImportJobResponse * const q);

    void parseDeleteDatasetImportJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDatasetImportJobResponse)
    Q_DISABLE_COPY(DeleteDatasetImportJobResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
