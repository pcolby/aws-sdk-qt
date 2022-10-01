// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getportfoliosummaryresponse.h"
#include "getportfoliosummaryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHubStrategy {

/*!
 * \class QtAws::MigrationHubStrategy::GetPortfolioSummaryResponse
 * \brief The GetPortfolioSummaryResponse class provides an interace for MigrationHubStrategy GetPortfolioSummary responses.
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
 * \sa MigrationHubStrategyClient::getPortfolioSummary
 */

/*!
 * Constructs a GetPortfolioSummaryResponse object for \a reply to \a request, with parent \a parent.
 */
GetPortfolioSummaryResponse::GetPortfolioSummaryResponse(
        const GetPortfolioSummaryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubStrategyResponse(new GetPortfolioSummaryResponsePrivate(this), parent)
{
    setRequest(new GetPortfolioSummaryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetPortfolioSummaryRequest * GetPortfolioSummaryResponse::request() const
{
    Q_D(const GetPortfolioSummaryResponse);
    return static_cast<const GetPortfolioSummaryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MigrationHubStrategy GetPortfolioSummary \a response.
 */
void GetPortfolioSummaryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetPortfolioSummaryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MigrationHubStrategy::GetPortfolioSummaryResponsePrivate
 * \brief The GetPortfolioSummaryResponsePrivate class provides private implementation for GetPortfolioSummaryResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHubStrategy
 */

/*!
 * Constructs a GetPortfolioSummaryResponsePrivate object with public implementation \a q.
 */
GetPortfolioSummaryResponsePrivate::GetPortfolioSummaryResponsePrivate(
    GetPortfolioSummaryResponse * const q) : MigrationHubStrategyResponsePrivate(q)
{

}

/*!
 * Parses a MigrationHubStrategy GetPortfolioSummary response element from \a xml.
 */
void GetPortfolioSummaryResponsePrivate::parseGetPortfolioSummaryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPortfolioSummaryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MigrationHubStrategy
} // namespace QtAws
