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

#include "getresolverresponse.h"
#include "getresolverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::GetResolverResponse
 * \brief The GetResolverResponse class provides an interace for AppSync GetResolver responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::getResolver
 */

/*!
 * Constructs a GetResolverResponse object for \a reply to \a request, with parent \a parent.
 */
GetResolverResponse::GetResolverResponse(
        const GetResolverRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new GetResolverResponsePrivate(this), parent)
{
    setRequest(new GetResolverRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetResolverRequest * GetResolverResponse::request() const
{
    return static_cast<const GetResolverRequest *>(AppSyncResponse::request());
}

/*!
 * \reimp
 * Parses a successful AppSync GetResolver \a response.
 */
void GetResolverResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetResolverResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::GetResolverResponsePrivate
 * \brief The GetResolverResponsePrivate class provides private implementation for GetResolverResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a GetResolverResponsePrivate object with public implementation \a q.
 */
GetResolverResponsePrivate::GetResolverResponsePrivate(
    GetResolverResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync GetResolver response element from \a xml.
 */
void GetResolverResponsePrivate::parseGetResolverResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetResolverResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
