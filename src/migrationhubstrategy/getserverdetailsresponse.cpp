// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getserverdetailsresponse.h"
#include "getserverdetailsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHubStrategy {

/*!
 * \class QtAws::MigrationHubStrategy::GetServerDetailsResponse
 * \brief The GetServerDetailsResponse class provides an interace for MigrationHubStrategy GetServerDetails responses.
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
 * \sa MigrationHubStrategyClient::getServerDetails
 */

/*!
 * Constructs a GetServerDetailsResponse object for \a reply to \a request, with parent \a parent.
 */
GetServerDetailsResponse::GetServerDetailsResponse(
        const GetServerDetailsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubStrategyResponse(new GetServerDetailsResponsePrivate(this), parent)
{
    setRequest(new GetServerDetailsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetServerDetailsRequest * GetServerDetailsResponse::request() const
{
    Q_D(const GetServerDetailsResponse);
    return static_cast<const GetServerDetailsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MigrationHubStrategy GetServerDetails \a response.
 */
void GetServerDetailsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetServerDetailsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MigrationHubStrategy::GetServerDetailsResponsePrivate
 * \brief The GetServerDetailsResponsePrivate class provides private implementation for GetServerDetailsResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHubStrategy
 */

/*!
 * Constructs a GetServerDetailsResponsePrivate object with public implementation \a q.
 */
GetServerDetailsResponsePrivate::GetServerDetailsResponsePrivate(
    GetServerDetailsResponse * const q) : MigrationHubStrategyResponsePrivate(q)
{

}

/*!
 * Parses a MigrationHubStrategy GetServerDetails response element from \a xml.
 */
void GetServerDetailsResponsePrivate::parseGetServerDetailsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetServerDetailsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MigrationHubStrategy
} // namespace QtAws
