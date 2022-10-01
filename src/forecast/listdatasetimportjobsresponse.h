// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETIMPORTJOBSRESPONSE_H
#define QTAWS_LISTDATASETIMPORTJOBSRESPONSE_H

#include "forecastresponse.h"
#include "listdatasetimportjobsrequest.h"

namespace QtAws {
namespace Forecast {

class ListDatasetImportJobsResponsePrivate;

class QTAWSFORECAST_EXPORT ListDatasetImportJobsResponse : public ForecastResponse {
    Q_OBJECT

public:
    ListDatasetImportJobsResponse(const ListDatasetImportJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDatasetImportJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDatasetImportJobsResponse)
    Q_DISABLE_COPY(ListDatasetImportJobsResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif
