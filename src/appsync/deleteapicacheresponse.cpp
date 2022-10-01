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

#include "deleteapicacheresponse.h"
#include "deleteapicacheresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::DeleteApiCacheResponse
 * \brief The DeleteApiCacheResponse class provides an interace for AppSync DeleteApiCache responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::deleteApiCache
 */

/*!
 * Constructs a DeleteApiCacheResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteApiCacheResponse::DeleteApiCacheResponse(
        const DeleteApiCacheRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new DeleteApiCacheResponsePrivate(this), parent)
{
    setRequest(new DeleteApiCacheRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteApiCacheRequest * DeleteApiCacheResponse::request() const
{
    Q_D(const DeleteApiCacheResponse);
    return static_cast<const DeleteApiCacheRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync DeleteApiCache \a response.
 */
void DeleteApiCacheResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteApiCacheResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::DeleteApiCacheResponsePrivate
 * \brief The DeleteApiCacheResponsePrivate class provides private implementation for DeleteApiCacheResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a DeleteApiCacheResponsePrivate object with public implementation \a q.
 */
DeleteApiCacheResponsePrivate::DeleteApiCacheResponsePrivate(
    DeleteApiCacheResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync DeleteApiCache response element from \a xml.
 */
void DeleteApiCacheResponsePrivate::parseDeleteApiCacheResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteApiCacheResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
