// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
