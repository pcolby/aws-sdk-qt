// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
