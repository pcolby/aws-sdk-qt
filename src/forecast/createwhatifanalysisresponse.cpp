// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
