// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
