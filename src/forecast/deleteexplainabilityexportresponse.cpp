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

#include "deleteexplainabilityexportresponse.h"
#include "deleteexplainabilityexportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DeleteExplainabilityExportResponse
 * \brief The DeleteExplainabilityExportResponse class provides an interace for Forecast DeleteExplainabilityExport responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::deleteExplainabilityExport
 */

/*!
 * Constructs a DeleteExplainabilityExportResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteExplainabilityExportResponse::DeleteExplainabilityExportResponse(
        const DeleteExplainabilityExportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new DeleteExplainabilityExportResponsePrivate(this), parent)
{
    setRequest(new DeleteExplainabilityExportRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteExplainabilityExportRequest * DeleteExplainabilityExportResponse::request() const
{
    Q_D(const DeleteExplainabilityExportResponse);
    return static_cast<const DeleteExplainabilityExportRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast DeleteExplainabilityExport \a response.
 */
void DeleteExplainabilityExportResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteExplainabilityExportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::DeleteExplainabilityExportResponsePrivate
 * \brief The DeleteExplainabilityExportResponsePrivate class provides private implementation for DeleteExplainabilityExportResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DeleteExplainabilityExportResponsePrivate object with public implementation \a q.
 */
DeleteExplainabilityExportResponsePrivate::DeleteExplainabilityExportResponsePrivate(
    DeleteExplainabilityExportResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast DeleteExplainabilityExport response element from \a xml.
 */
void DeleteExplainabilityExportResponsePrivate::parseDeleteExplainabilityExportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteExplainabilityExportResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
