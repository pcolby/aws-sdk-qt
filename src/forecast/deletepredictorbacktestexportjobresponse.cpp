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

#include "deletepredictorbacktestexportjobresponse.h"
#include "deletepredictorbacktestexportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DeletePredictorBacktestExportJobResponse
 * \brief The DeletePredictorBacktestExportJobResponse class provides an interace for Forecast DeletePredictorBacktestExportJob responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::deletePredictorBacktestExportJob
 */

/*!
 * Constructs a DeletePredictorBacktestExportJobResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePredictorBacktestExportJobResponse::DeletePredictorBacktestExportJobResponse(
        const DeletePredictorBacktestExportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new DeletePredictorBacktestExportJobResponsePrivate(this), parent)
{
    setRequest(new DeletePredictorBacktestExportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePredictorBacktestExportJobRequest * DeletePredictorBacktestExportJobResponse::request() const
{
    Q_D(const DeletePredictorBacktestExportJobResponse);
    return static_cast<const DeletePredictorBacktestExportJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast DeletePredictorBacktestExportJob \a response.
 */
void DeletePredictorBacktestExportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeletePredictorBacktestExportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::DeletePredictorBacktestExportJobResponsePrivate
 * \brief The DeletePredictorBacktestExportJobResponsePrivate class provides private implementation for DeletePredictorBacktestExportJobResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DeletePredictorBacktestExportJobResponsePrivate object with public implementation \a q.
 */
DeletePredictorBacktestExportJobResponsePrivate::DeletePredictorBacktestExportJobResponsePrivate(
    DeletePredictorBacktestExportJobResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast DeletePredictorBacktestExportJob response element from \a xml.
 */
void DeletePredictorBacktestExportJobResponsePrivate::parseDeletePredictorBacktestExportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePredictorBacktestExportJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
