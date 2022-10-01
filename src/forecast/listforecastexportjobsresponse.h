// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFORECASTEXPORTJOBSRESPONSE_H
#define QTAWS_LISTFORECASTEXPORTJOBSRESPONSE_H

#include "forecastresponse.h"
#include "listforecastexportjobsrequest.h"

namespace QtAws {
namespace Forecast {

class ListForecastExportJobsResponsePrivate;

class QTAWSFORECAST_EXPORT ListForecastExportJobsResponse : public ForecastResponse {
    Q_OBJECT

public:
    ListForecastExportJobsResponse(const ListForecastExportJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListForecastExportJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListForecastExportJobsResponse)
    Q_DISABLE_COPY(ListForecastExportJobsResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif
