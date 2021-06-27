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

#include "listforecastsresponse.h"
#include "listforecastsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ForecastService {

/*!
 * \class QtAws::ForecastService::ListForecastsResponse
 * \brief The ListForecastsResponse class provides an interace for ForecastService ListForecasts responses.
 *
 * \inmodule QtAwsForecastService
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastServiceClient::listForecasts
 */

/*!
 * Constructs a ListForecastsResponse object for \a reply to \a request, with parent \a parent.
 */
ListForecastsResponse::ListForecastsResponse(
        const ListForecastsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastServiceResponse(new ListForecastsResponsePrivate(this), parent)
{
    setRequest(new ListForecastsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListForecastsRequest * ListForecastsResponse::request() const
{
    return static_cast<const ListForecastsRequest *>(ForecastServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful ForecastService ListForecasts \a response.
 */
void ListForecastsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListForecastsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ForecastService::ListForecastsResponsePrivate
 * \brief The ListForecastsResponsePrivate class provides private implementation for ListForecastsResponse.
 * \internal
 *
 * \inmodule QtAwsForecastService
 */

/*!
 * Constructs a ListForecastsResponsePrivate object with public implementation \a q.
 */
ListForecastsResponsePrivate::ListForecastsResponsePrivate(
    ListForecastsResponse * const q) : ForecastServiceResponsePrivate(q)
{

}

/*!
 * Parses a ForecastService ListForecasts response element from \a xml.
 */
void ListForecastsResponsePrivate::parseListForecastsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListForecastsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ForecastService
} // namespace QtAws
