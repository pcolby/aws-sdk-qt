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

#include "listexplainabilitiesresponse.h"
#include "listexplainabilitiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::ListExplainabilitiesResponse
 * \brief The ListExplainabilitiesResponse class provides an interace for Forecast ListExplainabilities responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::listExplainabilities
 */

/*!
 * Constructs a ListExplainabilitiesResponse object for \a reply to \a request, with parent \a parent.
 */
ListExplainabilitiesResponse::ListExplainabilitiesResponse(
        const ListExplainabilitiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new ListExplainabilitiesResponsePrivate(this), parent)
{
    setRequest(new ListExplainabilitiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListExplainabilitiesRequest * ListExplainabilitiesResponse::request() const
{
    Q_D(const ListExplainabilitiesResponse);
    return static_cast<const ListExplainabilitiesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast ListExplainabilities \a response.
 */
void ListExplainabilitiesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListExplainabilitiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::ListExplainabilitiesResponsePrivate
 * \brief The ListExplainabilitiesResponsePrivate class provides private implementation for ListExplainabilitiesResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a ListExplainabilitiesResponsePrivate object with public implementation \a q.
 */
ListExplainabilitiesResponsePrivate::ListExplainabilitiesResponsePrivate(
    ListExplainabilitiesResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast ListExplainabilities response element from \a xml.
 */
void ListExplainabilitiesResponsePrivate::parseListExplainabilitiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListExplainabilitiesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
