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

#include "listgraphqlapisresponse.h"
#include "listgraphqlapisresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::ListGraphqlApisResponse
 * \brief The ListGraphqlApisResponse class provides an interace for AppSync ListGraphqlApis responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::listGraphqlApis
 */

/*!
 * Constructs a ListGraphqlApisResponse object for \a reply to \a request, with parent \a parent.
 */
ListGraphqlApisResponse::ListGraphqlApisResponse(
        const ListGraphqlApisRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new ListGraphqlApisResponsePrivate(this), parent)
{
    setRequest(new ListGraphqlApisRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListGraphqlApisRequest * ListGraphqlApisResponse::request() const
{
    return static_cast<const ListGraphqlApisRequest *>(AppSyncResponse::request());
}

/*!
 * \reimp
 * Parses a successful AppSync ListGraphqlApis \a response.
 */
void ListGraphqlApisResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListGraphqlApisResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::ListGraphqlApisResponsePrivate
 * \brief The ListGraphqlApisResponsePrivate class provides private implementation for ListGraphqlApisResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a ListGraphqlApisResponsePrivate object with public implementation \a q.
 */
ListGraphqlApisResponsePrivate::ListGraphqlApisResponsePrivate(
    ListGraphqlApisResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync ListGraphqlApis response element from \a xml.
 */
void ListGraphqlApisResponsePrivate::parseListGraphqlApisResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGraphqlApisResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
