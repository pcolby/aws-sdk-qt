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

#include "deletewhatifforecastexportresponse.h"
#include "deletewhatifforecastexportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DeleteWhatIfForecastExportResponse
 * \brief The DeleteWhatIfForecastExportResponse class provides an interace for Forecast DeleteWhatIfForecastExport responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::deleteWhatIfForecastExport
 */

/*!
 * Constructs a DeleteWhatIfForecastExportResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteWhatIfForecastExportResponse::DeleteWhatIfForecastExportResponse(
        const DeleteWhatIfForecastExportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new DeleteWhatIfForecastExportResponsePrivate(this), parent)
{
    setRequest(new DeleteWhatIfForecastExportRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteWhatIfForecastExportRequest * DeleteWhatIfForecastExportResponse::request() const
{
    Q_D(const DeleteWhatIfForecastExportResponse);
    return static_cast<const DeleteWhatIfForecastExportRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast DeleteWhatIfForecastExport \a response.
 */
void DeleteWhatIfForecastExportResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteWhatIfForecastExportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::DeleteWhatIfForecastExportResponsePrivate
 * \brief The DeleteWhatIfForecastExportResponsePrivate class provides private implementation for DeleteWhatIfForecastExportResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DeleteWhatIfForecastExportResponsePrivate object with public implementation \a q.
 */
DeleteWhatIfForecastExportResponsePrivate::DeleteWhatIfForecastExportResponsePrivate(
    DeleteWhatIfForecastExportResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast DeleteWhatIfForecastExport response element from \a xml.
 */
void DeleteWhatIfForecastExportResponsePrivate::parseDeleteWhatIfForecastExportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteWhatIfForecastExportResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
