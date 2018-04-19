/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listtypesresponse.h"
#include "listtypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::ListTypesResponse
 * \brief The ListTypesResponse class provides an interace for AppSync ListTypes responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::listTypes
 */

/*!
 * Constructs a ListTypesResponse object for \a reply to \a request, with parent \a parent.
 */
ListTypesResponse::ListTypesResponse(
        const ListTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new ListTypesResponsePrivate(this), parent)
{
    setRequest(new ListTypesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTypesRequest * ListTypesResponse::request() const
{
    Q_D(const ListTypesResponse);
    return static_cast<const ListTypesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync ListTypes \a response.
 */
void ListTypesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::ListTypesResponsePrivate
 * \brief The ListTypesResponsePrivate class provides private implementation for ListTypesResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a ListTypesResponsePrivate object with public implementation \a q.
 */
ListTypesResponsePrivate::ListTypesResponsePrivate(
    ListTypesResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync ListTypes response element from \a xml.
 */
void ListTypesResponsePrivate::parseListTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTypesResponse"));
    /// @todo
}

} // namespace AppSync
} // namespace QtAws
