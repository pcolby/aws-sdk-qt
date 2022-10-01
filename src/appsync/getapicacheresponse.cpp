// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
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
