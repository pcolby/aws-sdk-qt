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

#include "listwhatifanalysesresponse.h"
#include "listwhatifanalysesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::ListWhatIfAnalysesResponse
 * \brief The ListWhatIfAnalysesResponse class provides an interace for Forecast ListWhatIfAnalyses responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::listWhatIfAnalyses
 */

/*!
 * Constructs a ListWhatIfAnalysesResponse object for \a reply to \a request, with parent \a parent.
 */
ListWhatIfAnalysesResponse::ListWhatIfAnalysesResponse(
        const ListWhatIfAnalysesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new ListWhatIfAnalysesResponsePrivate(this), parent)
{
    setRequest(new ListWhatIfAnalysesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListWhatIfAnalysesRequest * ListWhatIfAnalysesResponse::request() const
{
    Q_D(const ListWhatIfAnalysesResponse);
    return static_cast<const ListWhatIfAnalysesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast ListWhatIfAnalyses \a response.
 */
void ListWhatIfAnalysesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListWhatIfAnalysesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::ListWhatIfAnalysesResponsePrivate
 * \brief The ListWhatIfAnalysesResponsePrivate class provides private implementation for ListWhatIfAnalysesResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a ListWhatIfAnalysesResponsePrivate object with public implementation \a q.
 */
ListWhatIfAnalysesResponsePrivate::ListWhatIfAnalysesResponsePrivate(
    ListWhatIfAnalysesResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast ListWhatIfAnalyses response element from \a xml.
 */
void ListWhatIfAnalysesResponsePrivate::parseListWhatIfAnalysesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListWhatIfAnalysesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
