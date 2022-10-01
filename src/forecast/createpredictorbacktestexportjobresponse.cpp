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

#include "createpredictorbacktestexportjobresponse.h"
#include "createpredictorbacktestexportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::CreatePredictorBacktestExportJobResponse
 * \brief The CreatePredictorBacktestExportJobResponse class provides an interace for Forecast CreatePredictorBacktestExportJob responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::createPredictorBacktestExportJob
 */

/*!
 * Constructs a CreatePredictorBacktestExportJobResponse object for \a reply to \a request, with parent \a parent.
 */
CreatePredictorBacktestExportJobResponse::CreatePredictorBacktestExportJobResponse(
        const CreatePredictorBacktestExportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new CreatePredictorBacktestExportJobResponsePrivate(this), parent)
{
    setRequest(new CreatePredictorBacktestExportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreatePredictorBacktestExportJobRequest * CreatePredictorBacktestExportJobResponse::request() const
{
    Q_D(const CreatePredictorBacktestExportJobResponse);
    return static_cast<const CreatePredictorBacktestExportJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast CreatePredictorBacktestExportJob \a response.
 */
void CreatePredictorBacktestExportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreatePredictorBacktestExportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::CreatePredictorBacktestExportJobResponsePrivate
 * \brief The CreatePredictorBacktestExportJobResponsePrivate class provides private implementation for CreatePredictorBacktestExportJobResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a CreatePredictorBacktestExportJobResponsePrivate object with public implementation \a q.
 */
CreatePredictorBacktestExportJobResponsePrivate::CreatePredictorBacktestExportJobResponsePrivate(
    CreatePredictorBacktestExportJobResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast CreatePredictorBacktestExportJob response element from \a xml.
 */
void CreatePredictorBacktestExportJobResponsePrivate::parseCreatePredictorBacktestExportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePredictorBacktestExportJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
