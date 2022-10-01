// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWHATIFFORECASTRESPONSE_H
#define QTAWS_CREATEWHATIFFORECASTRESPONSE_H

#include "forecastresponse.h"
#include "createwhatifforecastrequest.h"

namespace QtAws {
namespace Forecast {

class CreateWhatIfForecastResponsePrivate;

class QTAWSFORECAST_EXPORT CreateWhatIfForecastResponse : public ForecastResponse {
    Q_OBJECT

public:
    CreateWhatIfForecastResponse(const CreateWhatIfForecastRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateWhatIfForecastRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWhatIfForecastResponse)
    Q_DISABLE_COPY(CreateWhatIfForecastResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif
