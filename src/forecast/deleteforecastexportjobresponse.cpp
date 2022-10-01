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

#include "deleteforecastexportjobresponse.h"
#include "deleteforecastexportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DeleteForecastExportJobResponse
 * \brief The DeleteForecastExportJobResponse class provides an interace for Forecast DeleteForecastExportJob responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::deleteForecastExportJob
 */

/*!
 * Constructs a DeleteForecastExportJobResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteForecastExportJobResponse::DeleteForecastExportJobResponse(
        const DeleteForecastExportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new DeleteForecastExportJobResponsePrivate(this), parent)
{
    setRequest(new DeleteForecastExportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteForecastExportJobRequest * DeleteForecastExportJobResponse::request() const
{
    Q_D(const DeleteForecastExportJobResponse);
    return static_cast<const DeleteForecastExportJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast DeleteForecastExportJob \a response.
 */
void DeleteForecastExportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteForecastExportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::DeleteForecastExportJobResponsePrivate
 * \brief The DeleteForecastExportJobResponsePrivate class provides private implementation for DeleteForecastExportJobResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DeleteForecastExportJobResponsePrivate object with public implementation \a q.
 */
DeleteForecastExportJobResponsePrivate::DeleteForecastExportJobResponsePrivate(
    DeleteForecastExportJobResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast DeleteForecastExportJob response element from \a xml.
 */
void DeleteForecastExportJobResponsePrivate::parseDeleteForecastExportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteForecastExportJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
