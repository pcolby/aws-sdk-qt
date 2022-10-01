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

#include "listpredictorsresponse.h"
#include "listpredictorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::ListPredictorsResponse
 * \brief The ListPredictorsResponse class provides an interace for Forecast ListPredictors responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::listPredictors
 */

/*!
 * Constructs a ListPredictorsResponse object for \a reply to \a request, with parent \a parent.
 */
ListPredictorsResponse::ListPredictorsResponse(
        const ListPredictorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new ListPredictorsResponsePrivate(this), parent)
{
    setRequest(new ListPredictorsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPredictorsRequest * ListPredictorsResponse::request() const
{
    Q_D(const ListPredictorsResponse);
    return static_cast<const ListPredictorsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast ListPredictors \a response.
 */
void ListPredictorsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPredictorsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::ListPredictorsResponsePrivate
 * \brief The ListPredictorsResponsePrivate class provides private implementation for ListPredictorsResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a ListPredictorsResponsePrivate object with public implementation \a q.
 */
ListPredictorsResponsePrivate::ListPredictorsResponsePrivate(
    ListPredictorsResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast ListPredictors response element from \a xml.
 */
void ListPredictorsResponsePrivate::parseListPredictorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPredictorsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
