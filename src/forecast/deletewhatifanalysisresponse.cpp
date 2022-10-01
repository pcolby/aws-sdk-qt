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

#include "deletewhatifanalysisresponse.h"
#include "deletewhatifanalysisresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DeleteWhatIfAnalysisResponse
 * \brief The DeleteWhatIfAnalysisResponse class provides an interace for Forecast DeleteWhatIfAnalysis responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::deleteWhatIfAnalysis
 */

/*!
 * Constructs a DeleteWhatIfAnalysisResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteWhatIfAnalysisResponse::DeleteWhatIfAnalysisResponse(
        const DeleteWhatIfAnalysisRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new DeleteWhatIfAnalysisResponsePrivate(this), parent)
{
    setRequest(new DeleteWhatIfAnalysisRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteWhatIfAnalysisRequest * DeleteWhatIfAnalysisResponse::request() const
{
    Q_D(const DeleteWhatIfAnalysisResponse);
    return static_cast<const DeleteWhatIfAnalysisRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast DeleteWhatIfAnalysis \a response.
 */
void DeleteWhatIfAnalysisResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteWhatIfAnalysisResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::DeleteWhatIfAnalysisResponsePrivate
 * \brief The DeleteWhatIfAnalysisResponsePrivate class provides private implementation for DeleteWhatIfAnalysisResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DeleteWhatIfAnalysisResponsePrivate object with public implementation \a q.
 */
DeleteWhatIfAnalysisResponsePrivate::DeleteWhatIfAnalysisResponsePrivate(
    DeleteWhatIfAnalysisResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast DeleteWhatIfAnalysis response element from \a xml.
 */
void DeleteWhatIfAnalysisResponsePrivate::parseDeleteWhatIfAnalysisResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteWhatIfAnalysisResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
