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
