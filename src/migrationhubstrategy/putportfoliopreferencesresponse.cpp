// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putportfoliopreferencesresponse.h"
#include "putportfoliopreferencesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHubStrategy {

/*!
 * \class QtAws::MigrationHubStrategy::PutPortfolioPreferencesResponse
 * \brief The PutPortfolioPreferencesResponse class provides an interace for MigrationHubStrategy PutPortfolioPreferences responses.
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
 * \sa MigrationHubStrategyClient::putPortfolioPreferences
 */

/*!
 * Constructs a PutPortfolioPreferencesResponse object for \a reply to \a request, with parent \a parent.
 */
PutPortfolioPreferencesResponse::PutPortfolioPreferencesResponse(
        const PutPortfolioPreferencesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubStrategyResponse(new PutPortfolioPreferencesResponsePrivate(this), parent)
{
    setRequest(new PutPortfolioPreferencesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutPortfolioPreferencesRequest * PutPortfolioPreferencesResponse::request() const
{
    Q_D(const PutPortfolioPreferencesResponse);
    return static_cast<const PutPortfolioPreferencesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MigrationHubStrategy PutPortfolioPreferences \a response.
 */
void PutPortfolioPreferencesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutPortfolioPreferencesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MigrationHubStrategy::PutPortfolioPreferencesResponsePrivate
 * \brief The PutPortfolioPreferencesResponsePrivate class provides private implementation for PutPortfolioPreferencesResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHubStrategy
 */

/*!
 * Constructs a PutPortfolioPreferencesResponsePrivate object with public implementation \a q.
 */
PutPortfolioPreferencesResponsePrivate::PutPortfolioPreferencesResponsePrivate(
    PutPortfolioPreferencesResponse * const q) : MigrationHubStrategyResponsePrivate(q)
{

}

/*!
 * Parses a MigrationHubStrategy PutPortfolioPreferences response element from \a xml.
 */
void PutPortfolioPreferencesResponsePrivate::parsePutPortfolioPreferencesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutPortfolioPreferencesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MigrationHubStrategy
} // namespace QtAws
