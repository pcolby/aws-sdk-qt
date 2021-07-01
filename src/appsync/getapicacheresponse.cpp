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

#include "getapicacheresponse.h"
#include "getapicacheresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::GetApiCacheResponse
 * \brief The GetApiCacheResponse class provides an interace for AppSync GetApiCache responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::getApiCache
 */

/*!
 * Constructs a GetApiCacheResponse object for \a reply to \a request, with parent \a parent.
 */
GetApiCacheResponse::GetApiCacheResponse(
        const GetApiCacheRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new GetApiCacheResponsePrivate(this), parent)
{
    setRequest(new GetApiCacheRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetApiCacheRequest * GetApiCacheResponse::request() const
{
    Q_D(const GetApiCacheResponse);
    return static_cast<const GetApiCacheRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync GetApiCache \a response.
 */
void GetApiCacheResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetApiCacheResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::GetApiCacheResponsePrivate
 * \brief The GetApiCacheResponsePrivate class provides private implementation for GetApiCacheResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a GetApiCacheResponsePrivate object with public implementation \a q.
 */
GetApiCacheResponsePrivate::GetApiCacheResponsePrivate(
    GetApiCacheResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync GetApiCache response element from \a xml.
 */
void GetApiCacheResponsePrivate::parseGetApiCacheResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetApiCacheResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
