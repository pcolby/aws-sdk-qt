// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFORECASTRESPONSE_H
#define QTAWS_DELETEFORECASTRESPONSE_H

#include "forecastresponse.h"
#include "deleteforecastrequest.h"

namespace QtAws {
namespace Forecast {

class DeleteForecastResponsePrivate;

class QTAWSFORECAST_EXPORT DeleteForecastResponse : public ForecastResponse {
    Q_OBJECT

public:
    DeleteForecastResponse(const DeleteForecastRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteForecastRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteForecastResponse)
    Q_DISABLE_COPY(DeleteForecastResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif
