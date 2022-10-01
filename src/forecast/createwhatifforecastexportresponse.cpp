// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createwhatifforecastexportresponse.h"
#include "createwhatifforecastexportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::CreateWhatIfForecastExportResponse
 * \brief The CreateWhatIfForecastExportResponse class provides an interace for Forecast CreateWhatIfForecastExport responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::createWhatIfForecastExport
 */

/*!
 * Constructs a CreateWhatIfForecastExportResponse object for \a reply to \a request, with parent \a parent.
 */
CreateWhatIfForecastExportResponse::CreateWhatIfForecastExportResponse(
        const CreateWhatIfForecastExportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new CreateWhatIfForecastExportResponsePrivate(this), parent)
{
    setRequest(new CreateWhatIfForecastExportRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateWhatIfForecastExportRequest * CreateWhatIfForecastExportResponse::request() const
{
    Q_D(const CreateWhatIfForecastExportResponse);
    return static_cast<const CreateWhatIfForecastExportRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast CreateWhatIfForecastExport \a response.
 */
void CreateWhatIfForecastExportResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateWhatIfForecastExportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::CreateWhatIfForecastExportResponsePrivate
 * \brief The CreateWhatIfForecastExportResponsePrivate class provides private implementation for CreateWhatIfForecastExportResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a CreateWhatIfForecastExportResponsePrivate object with public implementation \a q.
 */
CreateWhatIfForecastExportResponsePrivate::CreateWhatIfForecastExportResponsePrivate(
    CreateWhatIfForecastExportResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast CreateWhatIfForecastExport response element from \a xml.
 */
void CreateWhatIfForecastExportResponsePrivate::parseCreateWhatIfForecastExportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateWhatIfForecastExportResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
