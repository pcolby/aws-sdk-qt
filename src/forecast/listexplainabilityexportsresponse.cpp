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

#include "listexplainabilityexportsresponse.h"
#include "listexplainabilityexportsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::ListExplainabilityExportsResponse
 * \brief The ListExplainabilityExportsResponse class provides an interace for Forecast ListExplainabilityExports responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::listExplainabilityExports
 */

/*!
 * Constructs a ListExplainabilityExportsResponse object for \a reply to \a request, with parent \a parent.
 */
ListExplainabilityExportsResponse::ListExplainabilityExportsResponse(
        const ListExplainabilityExportsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new ListExplainabilityExportsResponsePrivate(this), parent)
{
    setRequest(new ListExplainabilityExportsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListExplainabilityExportsRequest * ListExplainabilityExportsResponse::request() const
{
    Q_D(const ListExplainabilityExportsResponse);
    return static_cast<const ListExplainabilityExportsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast ListExplainabilityExports \a response.
 */
void ListExplainabilityExportsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListExplainabilityExportsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::ListExplainabilityExportsResponsePrivate
 * \brief The ListExplainabilityExportsResponsePrivate class provides private implementation for ListExplainabilityExportsResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a ListExplainabilityExportsResponsePrivate object with public implementation \a q.
 */
ListExplainabilityExportsResponsePrivate::ListExplainabilityExportsResponsePrivate(
    ListExplainabilityExportsResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast ListExplainabilityExports response element from \a xml.
 */
void ListExplainabilityExportsResponsePrivate::parseListExplainabilityExportsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListExplainabilityExportsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
