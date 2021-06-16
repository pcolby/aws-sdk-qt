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

#include "createforecastresponse.h"
#include "createforecastresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ForecastService {

/*!
 * \class QtAws::ForecastService::CreateForecastResponse
 * \brief The CreateForecastResponse class provides an interace for ForecastService CreateForecast responses.
 *
 * \inmodule QtAwsForecastService
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastServiceClient::createForecast
 */

/*!
 * Constructs a CreateForecastResponse object for \a reply to \a request, with parent \a parent.
 */
CreateForecastResponse::CreateForecastResponse(
        const CreateForecastRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastServiceResponse(new CreateForecastResponsePrivate(this), parent)
{
    setRequest(new CreateForecastRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateForecastRequest * CreateForecastResponse::request() const
{
    Q_D(const CreateForecastResponse);
    return static_cast<const CreateForecastRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ForecastService CreateForecast \a response.
 */
void CreateForecastResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateForecastResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ForecastService::CreateForecastResponsePrivate
 * \brief The CreateForecastResponsePrivate class provides private implementation for CreateForecastResponse.
 * \internal
 *
 * \inmodule QtAwsForecastService
 */

/*!
 * Constructs a CreateForecastResponsePrivate object with public implementation \a q.
 */
CreateForecastResponsePrivate::CreateForecastResponsePrivate(
    CreateForecastResponse * const q) : ForecastServiceResponsePrivate(q)
{

}

/*!
 * Parses a ForecastService CreateForecast response element from \a xml.
 */
void CreateForecastResponsePrivate::parseCreateForecastResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateForecastResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ForecastService
} // namespace QtAws
