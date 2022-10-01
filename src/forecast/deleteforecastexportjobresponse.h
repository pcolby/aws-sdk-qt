// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFORECASTEXPORTJOBRESPONSE_H
#define QTAWS_DELETEFORECASTEXPORTJOBRESPONSE_H

#include "forecastresponse.h"
#include "deleteforecastexportjobrequest.h"

namespace QtAws {
namespace Forecast {

class DeleteForecastExportJobResponsePrivate;

class QTAWSFORECAST_EXPORT DeleteForecastExportJobResponse : public ForecastResponse {
    Q_OBJECT

public:
    DeleteForecastExportJobResponse(const DeleteForecastExportJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteForecastExportJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteForecastExportJobResponse)
    Q_DISABLE_COPY(DeleteForecastExportJobResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif
