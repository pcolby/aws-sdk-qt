// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
