// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listserversresponse.h"
#include "listserversresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHubStrategy {

/*!
 * \class QtAws::MigrationHubStrategy::ListServersResponse
 * \brief The ListServersResponse class provides an interace for MigrationHubStrategy ListServers responses.
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
 * \sa MigrationHubStrategyClient::listServers
 */

/*!
 * Constructs a ListServersResponse object for \a reply to \a request, with parent \a parent.
 */
ListServersResponse::ListServersResponse(
        const ListServersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubStrategyResponse(new ListServersResponsePrivate(this), parent)
{
    setRequest(new ListServersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListServersRequest * ListServersResponse::request() const
{
    Q_D(const ListServersResponse);
    return static_cast<const ListServersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MigrationHubStrategy ListServers \a response.
 */
void ListServersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListServersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MigrationHubStrategy::ListServersResponsePrivate
 * \brief The ListServersResponsePrivate class provides private implementation for ListServersResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHubStrategy
 */

/*!
 * Constructs a ListServersResponsePrivate object with public implementation \a q.
 */
ListServersResponsePrivate::ListServersResponsePrivate(
    ListServersResponse * const q) : MigrationHubStrategyResponsePrivate(q)
{

}

/*!
 * Parses a MigrationHubStrategy ListServers response element from \a xml.
 */
void ListServersResponsePrivate::parseListServersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListServersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MigrationHubStrategy
} // namespace QtAws
