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

#include "deletewhatifforecastresponse.h"
#include "deletewhatifforecastresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DeleteWhatIfForecastResponse
 * \brief The DeleteWhatIfForecastResponse class provides an interace for Forecast DeleteWhatIfForecast responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::deleteWhatIfForecast
 */

/*!
 * Constructs a DeleteWhatIfForecastResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteWhatIfForecastResponse::DeleteWhatIfForecastResponse(
        const DeleteWhatIfForecastRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new DeleteWhatIfForecastResponsePrivate(this), parent)
{
    setRequest(new DeleteWhatIfForecastRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteWhatIfForecastRequest * DeleteWhatIfForecastResponse::request() const
{
    Q_D(const DeleteWhatIfForecastResponse);
    return static_cast<const DeleteWhatIfForecastRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast DeleteWhatIfForecast \a response.
 */
void DeleteWhatIfForecastResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteWhatIfForecastResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::DeleteWhatIfForecastResponsePrivate
 * \brief The DeleteWhatIfForecastResponsePrivate class provides private implementation for DeleteWhatIfForecastResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DeleteWhatIfForecastResponsePrivate object with public implementation \a q.
 */
DeleteWhatIfForecastResponsePrivate::DeleteWhatIfForecastResponsePrivate(
    DeleteWhatIfForecastResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast DeleteWhatIfForecast response element from \a xml.
 */
void DeleteWhatIfForecastResponsePrivate::parseDeleteWhatIfForecastResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteWhatIfForecastResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
