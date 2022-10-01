// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getapplicationcomponentstrategiesresponse.h"
#include "getapplicationcomponentstrategiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHubStrategy {

/*!
 * \class QtAws::MigrationHubStrategy::GetApplicationComponentStrategiesResponse
 * \brief The GetApplicationComponentStrategiesResponse class provides an interace for MigrationHubStrategy GetApplicationComponentStrategies responses.
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
 * \sa MigrationHubStrategyClient::getApplicationComponentStrategies
 */

/*!
 * Constructs a GetApplicationComponentStrategiesResponse object for \a reply to \a request, with parent \a parent.
 */
GetApplicationComponentStrategiesResponse::GetApplicationComponentStrategiesResponse(
        const GetApplicationComponentStrategiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubStrategyResponse(new GetApplicationComponentStrategiesResponsePrivate(this), parent)
{
    setRequest(new GetApplicationComponentStrategiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetApplicationComponentStrategiesRequest * GetApplicationComponentStrategiesResponse::request() const
{
    Q_D(const GetApplicationComponentStrategiesResponse);
    return static_cast<const GetApplicationComponentStrategiesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MigrationHubStrategy GetApplicationComponentStrategies \a response.
 */
void GetApplicationComponentStrategiesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetApplicationComponentStrategiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MigrationHubStrategy::GetApplicationComponentStrategiesResponsePrivate
 * \brief The GetApplicationComponentStrategiesResponsePrivate class provides private implementation for GetApplicationComponentStrategiesResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHubStrategy
 */

/*!
 * Constructs a GetApplicationComponentStrategiesResponsePrivate object with public implementation \a q.
 */
GetApplicationComponentStrategiesResponsePrivate::GetApplicationComponentStrategiesResponsePrivate(
    GetApplicationComponentStrategiesResponse * const q) : MigrationHubStrategyResponsePrivate(q)
{

}

/*!
 * Parses a MigrationHubStrategy GetApplicationComponentStrategies response element from \a xml.
 */
void GetApplicationComponentStrategiesResponsePrivate::parseGetApplicationComponentStrategiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetApplicationComponentStrategiesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MigrationHubStrategy
} // namespace QtAws
