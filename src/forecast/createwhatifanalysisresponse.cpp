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

#include "createwhatifanalysisresponse.h"
#include "createwhatifanalysisresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::CreateWhatIfAnalysisResponse
 * \brief The CreateWhatIfAnalysisResponse class provides an interace for Forecast CreateWhatIfAnalysis responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::createWhatIfAnalysis
 */

/*!
 * Constructs a CreateWhatIfAnalysisResponse object for \a reply to \a request, with parent \a parent.
 */
CreateWhatIfAnalysisResponse::CreateWhatIfAnalysisResponse(
        const CreateWhatIfAnalysisRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new CreateWhatIfAnalysisResponsePrivate(this), parent)
{
    setRequest(new CreateWhatIfAnalysisRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateWhatIfAnalysisRequest * CreateWhatIfAnalysisResponse::request() const
{
    Q_D(const CreateWhatIfAnalysisResponse);
    return static_cast<const CreateWhatIfAnalysisRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast CreateWhatIfAnalysis \a response.
 */
void CreateWhatIfAnalysisResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateWhatIfAnalysisResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::CreateWhatIfAnalysisResponsePrivate
 * \brief The CreateWhatIfAnalysisResponsePrivate class provides private implementation for CreateWhatIfAnalysisResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a CreateWhatIfAnalysisResponsePrivate object with public implementation \a q.
 */
CreateWhatIfAnalysisResponsePrivate::CreateWhatIfAnalysisResponsePrivate(
    CreateWhatIfAnalysisResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast CreateWhatIfAnalysis response element from \a xml.
 */
void CreateWhatIfAnalysisResponsePrivate::parseCreateWhatIfAnalysisResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateWhatIfAnalysisResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
