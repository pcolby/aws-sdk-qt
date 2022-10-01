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

#include "startrecommendationreportgenerationresponse.h"
#include "startrecommendationreportgenerationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHubStrategy {

/*!
 * \class QtAws::MigrationHubStrategy::StartRecommendationReportGenerationResponse
 * \brief The StartRecommendationReportGenerationResponse class provides an interace for MigrationHubStrategy StartRecommendationReportGeneration responses.
 *
 * \inmodule QtAwsMigrationHubStrategy
 *
 *  <fullname>Migration Hub Strategy Recommendations</fullname>
 * 
 *  This API reference provides descriptions, syntax, and other details about each of the actions and data types for
 *  Migration Hub Strategy Recommendations (Strategy Recommendations). The topic for each action shows the API request
 *  parameters and the response. Alternatively, you can use one of the AWS SDKs to access an API that is tailored to the
 *  programming language or platform that you're using. For more information, see <a
 *  href="http://aws.amazon.com/tools/#SDKs">AWS
 *
 * \sa MigrationHubStrategyClient::startRecommendationReportGeneration
 */

/*!
 * Constructs a StartRecommendationReportGenerationResponse object for \a reply to \a request, with parent \a parent.
 */
StartRecommendationReportGenerationResponse::StartRecommendationReportGenerationResponse(
        const StartRecommendationReportGenerationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubStrategyResponse(new StartRecommendationReportGenerationResponsePrivate(this), parent)
{
    setRequest(new StartRecommendationReportGenerationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartRecommendationReportGenerationRequest * StartRecommendationReportGenerationResponse::request() const
{
    Q_D(const StartRecommendationReportGenerationResponse);
    return static_cast<const StartRecommendationReportGenerationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MigrationHubStrategy StartRecommendationReportGeneration \a response.
 */
void StartRecommendationReportGenerationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartRecommendationReportGenerationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MigrationHubStrategy::StartRecommendationReportGenerationResponsePrivate
 * \brief The StartRecommendationReportGenerationResponsePrivate class provides private implementation for StartRecommendationReportGenerationResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHubStrategy
 */

/*!
 * Constructs a StartRecommendationReportGenerationResponsePrivate object with public implementation \a q.
 */
StartRecommendationReportGenerationResponsePrivate::StartRecommendationReportGenerationResponsePrivate(
    StartRecommendationReportGenerationResponse * const q) : MigrationHubStrategyResponsePrivate(q)
{

}

/*!
 * Parses a MigrationHubStrategy StartRecommendationReportGeneration response element from \a xml.
 */
void StartRecommendationReportGenerationResponsePrivate::parseStartRecommendationReportGenerationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartRecommendationReportGenerationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MigrationHubStrategy
} // namespace QtAws
