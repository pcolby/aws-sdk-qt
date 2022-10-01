// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
