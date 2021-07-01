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

#include "deleteforecastresponse.h"
#include "deleteforecastresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ForecastService {

/*!
 * \class QtAws::ForecastService::DeleteForecastResponse
 * \brief The DeleteForecastResponse class provides an interace for ForecastService DeleteForecast responses.
 *
 * \inmodule QtAwsForecastService
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastServiceClient::deleteForecast
 */

/*!
 * Constructs a DeleteForecastResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteForecastResponse::DeleteForecastResponse(
        const DeleteForecastRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastServiceResponse(new DeleteForecastResponsePrivate(this), parent)
{
    setRequest(new DeleteForecastRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteForecastRequest * DeleteForecastResponse::request() const
{
    Q_D(const DeleteForecastResponse);
    return static_cast<const DeleteForecastRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ForecastService DeleteForecast \a response.
 */
void DeleteForecastResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteForecastResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ForecastService::DeleteForecastResponsePrivate
 * \brief The DeleteForecastResponsePrivate class provides private implementation for DeleteForecastResponse.
 * \internal
 *
 * \inmodule QtAwsForecastService
 */

/*!
 * Constructs a DeleteForecastResponsePrivate object with public implementation \a q.
 */
DeleteForecastResponsePrivate::DeleteForecastResponsePrivate(
    DeleteForecastResponse * const q) : ForecastServiceResponsePrivate(q)
{

}

/*!
 * Parses a ForecastService DeleteForecast response element from \a xml.
 */
void DeleteForecastResponsePrivate::parseDeleteForecastResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteForecastResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ForecastService
} // namespace QtAws
