/*
    Copyright 2013-2018 Paul Colby

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

#include "listdatasourcesresponse.h"
#include "listdatasourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::ListDataSourcesResponse
 * \brief The ListDataSourcesResponse class provides an interace for AppSync ListDataSources responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::listDataSources
 */

/*!
 * Constructs a ListDataSourcesResponse object for \a reply to \a request, with parent \a parent.
 */
ListDataSourcesResponse::ListDataSourcesResponse(
        const ListDataSourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new ListDataSourcesResponsePrivate(this), parent)
{
    setRequest(new ListDataSourcesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDataSourcesRequest * ListDataSourcesResponse::request() const
{
    Q_D(const ListDataSourcesResponse);
    return static_cast<const ListDataSourcesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync ListDataSources \a response.
 */
void ListDataSourcesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDataSourcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::ListDataSourcesResponsePrivate
 * \brief The ListDataSourcesResponsePrivate class provides private implementation for ListDataSourcesResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a ListDataSourcesResponsePrivate object with public implementation \a q.
 */
ListDataSourcesResponsePrivate::ListDataSourcesResponsePrivate(
    ListDataSourcesResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync ListDataSources response element from \a xml.
 */
void ListDataSourcesResponsePrivate::parseListDataSourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDataSourcesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
