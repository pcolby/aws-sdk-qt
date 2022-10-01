/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
