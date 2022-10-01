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

#include "listapplicationcomponentsresponse.h"
#include "listapplicationcomponentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHubStrategy {

/*!
 * \class QtAws::MigrationHubStrategy::ListApplicationComponentsResponse
 * \brief The ListApplicationComponentsResponse class provides an interace for MigrationHubStrategy ListApplicationComponents responses.
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
 * \sa MigrationHubStrategyClient::listApplicationComponents
 */

/*!
 * Constructs a ListApplicationComponentsResponse object for \a reply to \a request, with parent \a parent.
 */
ListApplicationComponentsResponse::ListApplicationComponentsResponse(
        const ListApplicationComponentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubStrategyResponse(new ListApplicationComponentsResponsePrivate(this), parent)
{
    setRequest(new ListApplicationComponentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListApplicationComponentsRequest * ListApplicationComponentsResponse::request() const
{
    Q_D(const ListApplicationComponentsResponse);
    return static_cast<const ListApplicationComponentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MigrationHubStrategy ListApplicationComponents \a response.
 */
void ListApplicationComponentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListApplicationComponentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MigrationHubStrategy::ListApplicationComponentsResponsePrivate
 * \brief The ListApplicationComponentsResponsePrivate class provides private implementation for ListApplicationComponentsResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHubStrategy
 */

/*!
 * Constructs a ListApplicationComponentsResponsePrivate object with public implementation \a q.
 */
ListApplicationComponentsResponsePrivate::ListApplicationComponentsResponsePrivate(
    ListApplicationComponentsResponse * const q) : MigrationHubStrategyResponsePrivate(q)
{

}

/*!
 * Parses a MigrationHubStrategy ListApplicationComponents response element from \a xml.
 */
void ListApplicationComponentsResponsePrivate::parseListApplicationComponentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListApplicationComponentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MigrationHubStrategy
} // namespace QtAws
