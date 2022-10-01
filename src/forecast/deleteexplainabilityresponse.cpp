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
