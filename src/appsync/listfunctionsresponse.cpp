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

#include "listfunctionsresponse.h"
#include "listfunctionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::ListFunctionsResponse
 * \brief The ListFunctionsResponse class provides an interace for AppSync ListFunctions responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::listFunctions
 */

/*!
 * Constructs a ListFunctionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListFunctionsResponse::ListFunctionsResponse(
        const ListFunctionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new ListFunctionsResponsePrivate(this), parent)
{
    setRequest(new ListFunctionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListFunctionsRequest * ListFunctionsResponse::request() const
{
    return static_cast<const ListFunctionsRequest *>(AppSyncResponse::request());
}

/*!
 * \reimp
 * Parses a successful AppSync ListFunctions \a response.
 */
void ListFunctionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListFunctionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::ListFunctionsResponsePrivate
 * \brief The ListFunctionsResponsePrivate class provides private implementation for ListFunctionsResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a ListFunctionsResponsePrivate object with public implementation \a q.
 */
ListFunctionsResponsePrivate::ListFunctionsResponsePrivate(
    ListFunctionsResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync ListFunctions response element from \a xml.
 */
void ListFunctionsResponsePrivate::parseListFunctionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFunctionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
