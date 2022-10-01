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

#include "createapicacheresponse.h"
#include "createapicacheresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::CreateApiCacheResponse
 * \brief The CreateApiCacheResponse class provides an interace for AppSync CreateApiCache responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::createApiCache
 */

/*!
 * Constructs a CreateApiCacheResponse object for \a reply to \a request, with parent \a parent.
 */
CreateApiCacheResponse::CreateApiCacheResponse(
        const CreateApiCacheRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new CreateApiCacheResponsePrivate(this), parent)
{
    setRequest(new CreateApiCacheRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateApiCacheRequest * CreateApiCacheResponse::request() const
{
    Q_D(const CreateApiCacheResponse);
    return static_cast<const CreateApiCacheRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync CreateApiCache \a response.
 */
void CreateApiCacheResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateApiCacheResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::CreateApiCacheResponsePrivate
 * \brief The CreateApiCacheResponsePrivate class provides private implementation for CreateApiCacheResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a CreateApiCacheResponsePrivate object with public implementation \a q.
 */
CreateApiCacheResponsePrivate::CreateApiCacheResponsePrivate(
    CreateApiCacheResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync CreateApiCache response element from \a xml.
 */
void CreateApiCacheResponsePrivate::parseCreateApiCacheResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateApiCacheResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
