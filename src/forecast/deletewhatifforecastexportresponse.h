// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWHATIFFORECASTEXPORTRESPONSE_H
#define QTAWS_DELETEWHATIFFORECASTEXPORTRESPONSE_H

#include "forecastresponse.h"
#include "deletewhatifforecastexportrequest.h"

namespace QtAws {
namespace Forecast {

class DeleteWhatIfForecastExportResponsePrivate;

class QTAWSFORECAST_EXPORT DeleteWhatIfForecastExportResponse : public ForecastResponse {
    Q_OBJECT

public:
    DeleteWhatIfForecastExportResponse(const DeleteWhatIfForecastExportRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteWhatIfForecastExportRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteWhatIfForecastExportResponse)
    Q_DISABLE_COPY(DeleteWhatIfForecastExportResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif
