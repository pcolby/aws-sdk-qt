// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFORECASTRESPONSE_H
#define QTAWS_CREATEFORECASTRESPONSE_H

#include "forecastresponse.h"
#include "createforecastrequest.h"

namespace QtAws {
namespace Forecast {

class CreateForecastResponsePrivate;

class QTAWSFORECAST_EXPORT CreateForecastResponse : public ForecastResponse {
    Q_OBJECT

public:
    CreateForecastResponse(const CreateForecastRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateForecastRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateForecastResponse)
    Q_DISABLE_COPY(CreateForecastResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif
