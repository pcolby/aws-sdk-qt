// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETIMPORTJOBSRESPONSE_P_H
#define QTAWS_LISTDATASETIMPORTJOBSRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class ListDatasetImportJobsResponse;

class ListDatasetImportJobsResponsePrivate : public ForecastResponsePrivate {

public:

    explicit ListDatasetImportJobsResponsePrivate(ListDatasetImportJobsResponse * const q);

    void parseListDatasetImportJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDatasetImportJobsResponse)
    Q_DISABLE_COPY(ListDatasetImportJobsResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
