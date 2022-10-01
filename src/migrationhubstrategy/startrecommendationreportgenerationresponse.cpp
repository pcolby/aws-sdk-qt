// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
