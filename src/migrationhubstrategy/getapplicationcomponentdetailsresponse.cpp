// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getapplicationcomponentdetailsresponse.h"
#include "getapplicationcomponentdetailsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHubStrategy {

/*!
 * \class QtAws::MigrationHubStrategy::GetApplicationComponentDetailsResponse
 * \brief The GetApplicationComponentDetailsResponse class provides an interace for MigrationHubStrategy GetApplicationComponentDetails responses.
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
 * \sa MigrationHubStrategyClient::getApplicationComponentDetails
 */

/*!
 * Constructs a GetApplicationComponentDetailsResponse object for \a reply to \a request, with parent \a parent.
 */
GetApplicationComponentDetailsResponse::GetApplicationComponentDetailsResponse(
        const GetApplicationComponentDetailsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubStrategyResponse(new GetApplicationComponentDetailsResponsePrivate(this), parent)
{
    setRequest(new GetApplicationComponentDetailsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetApplicationComponentDetailsRequest * GetApplicationComponentDetailsResponse::request() const
{
    Q_D(const GetApplicationComponentDetailsResponse);
    return static_cast<const GetApplicationComponentDetailsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MigrationHubStrategy GetApplicationComponentDetails \a response.
 */
void GetApplicationComponentDetailsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetApplicationComponentDetailsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MigrationHubStrategy::GetApplicationComponentDetailsResponsePrivate
 * \brief The GetApplicationComponentDetailsResponsePrivate class provides private implementation for GetApplicationComponentDetailsResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHubStrategy
 */

/*!
 * Constructs a GetApplicationComponentDetailsResponsePrivate object with public implementation \a q.
 */
GetApplicationComponentDetailsResponsePrivate::GetApplicationComponentDetailsResponsePrivate(
    GetApplicationComponentDetailsResponse * const q) : MigrationHubStrategyResponsePrivate(q)
{

}

/*!
 * Parses a MigrationHubStrategy GetApplicationComponentDetails response element from \a xml.
 */
void GetApplicationComponentDetailsResponsePrivate::parseGetApplicationComponentDetailsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetApplicationComponentDetailsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MigrationHubStrategy
} // namespace QtAws
