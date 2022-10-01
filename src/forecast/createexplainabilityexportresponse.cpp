// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createexplainabilityexportresponse.h"
#include "createexplainabilityexportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::CreateExplainabilityExportResponse
 * \brief The CreateExplainabilityExportResponse class provides an interace for Forecast CreateExplainabilityExport responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::createExplainabilityExport
 */

/*!
 * Constructs a CreateExplainabilityExportResponse object for \a reply to \a request, with parent \a parent.
 */
CreateExplainabilityExportResponse::CreateExplainabilityExportResponse(
        const CreateExplainabilityExportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new CreateExplainabilityExportResponsePrivate(this), parent)
{
    setRequest(new CreateExplainabilityExportRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateExplainabilityExportRequest * CreateExplainabilityExportResponse::request() const
{
    Q_D(const CreateExplainabilityExportResponse);
    return static_cast<const CreateExplainabilityExportRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast CreateExplainabilityExport \a response.
 */
void CreateExplainabilityExportResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateExplainabilityExportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::CreateExplainabilityExportResponsePrivate
 * \brief The CreateExplainabilityExportResponsePrivate class provides private implementation for CreateExplainabilityExportResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a CreateExplainabilityExportResponsePrivate object with public implementation \a q.
 */
CreateExplainabilityExportResponsePrivate::CreateExplainabilityExportResponsePrivate(
    CreateExplainabilityExportResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast CreateExplainabilityExport response element from \a xml.
 */
void CreateExplainabilityExportResponsePrivate::parseCreateExplainabilityExportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateExplainabilityExportResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
