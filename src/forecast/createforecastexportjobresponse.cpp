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

#include "createforecastexportjobresponse.h"
#include "createforecastexportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::CreateForecastExportJobResponse
 * \brief The CreateForecastExportJobResponse class provides an interace for Forecast CreateForecastExportJob responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::createForecastExportJob
 */

/*!
 * Constructs a CreateForecastExportJobResponse object for \a reply to \a request, with parent \a parent.
 */
CreateForecastExportJobResponse::CreateForecastExportJobResponse(
        const CreateForecastExportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new CreateForecastExportJobResponsePrivate(this), parent)
{
    setRequest(new CreateForecastExportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateForecastExportJobRequest * CreateForecastExportJobResponse::request() const
{
    Q_D(const CreateForecastExportJobResponse);
    return static_cast<const CreateForecastExportJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast CreateForecastExportJob \a response.
 */
void CreateForecastExportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateForecastExportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::CreateForecastExportJobResponsePrivate
 * \brief The CreateForecastExportJobResponsePrivate class provides private implementation for CreateForecastExportJobResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a CreateForecastExportJobResponsePrivate object with public implementation \a q.
 */
CreateForecastExportJobResponsePrivate::CreateForecastExportJobResponsePrivate(
    CreateForecastExportJobResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast CreateForecastExportJob response element from \a xml.
 */
void CreateForecastExportJobResponsePrivate::parseCreateForecastExportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateForecastExportJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
