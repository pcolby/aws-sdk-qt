// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteexplainabilityresponse.h"
#include "deleteexplainabilityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DeleteExplainabilityResponse
 * \brief The DeleteExplainabilityResponse class provides an interace for Forecast DeleteExplainability responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::deleteExplainability
 */

/*!
 * Constructs a DeleteExplainabilityResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteExplainabilityResponse::DeleteExplainabilityResponse(
        const DeleteExplainabilityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new DeleteExplainabilityResponsePrivate(this), parent)
{
    setRequest(new DeleteExplainabilityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteExplainabilityRequest * DeleteExplainabilityResponse::request() const
{
    Q_D(const DeleteExplainabilityResponse);
    return static_cast<const DeleteExplainabilityRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast DeleteExplainability \a response.
 */
void DeleteExplainabilityResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteExplainabilityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::DeleteExplainabilityResponsePrivate
 * \brief The DeleteExplainabilityResponsePrivate class provides private implementation for DeleteExplainabilityResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DeleteExplainabilityResponsePrivate object with public implementation \a q.
 */
DeleteExplainabilityResponsePrivate::DeleteExplainabilityResponsePrivate(
    DeleteExplainabilityResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast DeleteExplainability response element from \a xml.
 */
void DeleteExplainabilityResponsePrivate::parseDeleteExplainabilityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteExplainabilityResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
