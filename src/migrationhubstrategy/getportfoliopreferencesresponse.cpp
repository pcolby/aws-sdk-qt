// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getportfoliopreferencesresponse.h"
#include "getportfoliopreferencesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHubStrategy {

/*!
 * \class QtAws::MigrationHubStrategy::GetPortfolioPreferencesResponse
 * \brief The GetPortfolioPreferencesResponse class provides an interace for MigrationHubStrategy GetPortfolioPreferences responses.
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
 * \sa MigrationHubStrategyClient::getPortfolioPreferences
 */

/*!
 * Constructs a GetPortfolioPreferencesResponse object for \a reply to \a request, with parent \a parent.
 */
GetPortfolioPreferencesResponse::GetPortfolioPreferencesResponse(
        const GetPortfolioPreferencesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubStrategyResponse(new GetPortfolioPreferencesResponsePrivate(this), parent)
{
    setRequest(new GetPortfolioPreferencesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetPortfolioPreferencesRequest * GetPortfolioPreferencesResponse::request() const
{
    Q_D(const GetPortfolioPreferencesResponse);
    return static_cast<const GetPortfolioPreferencesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MigrationHubStrategy GetPortfolioPreferences \a response.
 */
void GetPortfolioPreferencesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetPortfolioPreferencesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MigrationHubStrategy::GetPortfolioPreferencesResponsePrivate
 * \brief The GetPortfolioPreferencesResponsePrivate class provides private implementation for GetPortfolioPreferencesResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHubStrategy
 */

/*!
 * Constructs a GetPortfolioPreferencesResponsePrivate object with public implementation \a q.
 */
GetPortfolioPreferencesResponsePrivate::GetPortfolioPreferencesResponsePrivate(
    GetPortfolioPreferencesResponse * const q) : MigrationHubStrategyResponsePrivate(q)
{

}

/*!
 * Parses a MigrationHubStrategy GetPortfolioPreferences response element from \a xml.
 */
void GetPortfolioPreferencesResponsePrivate::parseGetPortfolioPreferencesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPortfolioPreferencesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MigrationHubStrategy
} // namespace QtAws
