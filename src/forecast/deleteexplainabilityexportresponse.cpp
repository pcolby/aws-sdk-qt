// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
