// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
