// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWHATIFFORECASTEXPORTRESPONSE_H
#define QTAWS_CREATEWHATIFFORECASTEXPORTRESPONSE_H

#include "forecastresponse.h"
#include "createwhatifforecastexportrequest.h"

namespace QtAws {
namespace Forecast {

class CreateWhatIfForecastExportResponsePrivate;

class QTAWSFORECAST_EXPORT CreateWhatIfForecastExportResponse : public ForecastResponse {
    Q_OBJECT

public:
    CreateWhatIfForecastExportResponse(const CreateWhatIfForecastExportRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateWhatIfForecastExportRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWhatIfForecastExportResponse)
    Q_DISABLE_COPY(CreateWhatIfForecastExportResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif
