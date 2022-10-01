// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getserverstrategiesresponse.h"
#include "getserverstrategiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHubStrategy {

/*!
 * \class QtAws::MigrationHubStrategy::GetServerStrategiesResponse
 * \brief The GetServerStrategiesResponse class provides an interace for MigrationHubStrategy GetServerStrategies responses.
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
 * \sa MigrationHubStrategyClient::getServerStrategies
 */

/*!
 * Constructs a GetServerStrategiesResponse object for \a reply to \a request, with parent \a parent.
 */
GetServerStrategiesResponse::GetServerStrategiesResponse(
        const GetServerStrategiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubStrategyResponse(new GetServerStrategiesResponsePrivate(this), parent)
{
    setRequest(new GetServerStrategiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetServerStrategiesRequest * GetServerStrategiesResponse::request() const
{
    Q_D(const GetServerStrategiesResponse);
    return static_cast<const GetServerStrategiesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MigrationHubStrategy GetServerStrategies \a response.
 */
void GetServerStrategiesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetServerStrategiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MigrationHubStrategy::GetServerStrategiesResponsePrivate
 * \brief The GetServerStrategiesResponsePrivate class provides private implementation for GetServerStrategiesResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHubStrategy
 */

/*!
 * Constructs a GetServerStrategiesResponsePrivate object with public implementation \a q.
 */
GetServerStrategiesResponsePrivate::GetServerStrategiesResponsePrivate(
    GetServerStrategiesResponse * const q) : MigrationHubStrategyResponsePrivate(q)
{

}

/*!
 * Parses a MigrationHubStrategy GetServerStrategies response element from \a xml.
 */
void GetServerStrategiesResponsePrivate::parseGetServerStrategiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetServerStrategiesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MigrationHubStrategy
} // namespace QtAws
