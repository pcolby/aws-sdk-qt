// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFORECASTEXPORTJOBRESPONSE_H
#define QTAWS_CREATEFORECASTEXPORTJOBRESPONSE_H

#include "forecastresponse.h"
#include "createforecastexportjobrequest.h"

namespace QtAws {
namespace Forecast {

class CreateForecastExportJobResponsePrivate;

class QTAWSFORECAST_EXPORT CreateForecastExportJobResponse : public ForecastResponse {
    Q_OBJECT

public:
    CreateForecastExportJobResponse(const CreateForecastExportJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateForecastExportJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateForecastExportJobResponse)
    Q_DISABLE_COPY(CreateForecastExportJobResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif
