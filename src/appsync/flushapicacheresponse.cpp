// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "flushapicacheresponse.h"
#include "flushapicacheresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::FlushApiCacheResponse
 * \brief The FlushApiCacheResponse class provides an interace for AppSync FlushApiCache responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::flushApiCache
 */

/*!
 * Constructs a FlushApiCacheResponse object for \a reply to \a request, with parent \a parent.
 */
FlushApiCacheResponse::FlushApiCacheResponse(
        const FlushApiCacheRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new FlushApiCacheResponsePrivate(this), parent)
{
    setRequest(new FlushApiCacheRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const FlushApiCacheRequest * FlushApiCacheResponse::request() const
{
    Q_D(const FlushApiCacheResponse);
    return static_cast<const FlushApiCacheRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync FlushApiCache \a response.
 */
void FlushApiCacheResponse::parseSuccess(QIODevice &response)
{
    //Q_D(FlushApiCacheResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::FlushApiCacheResponsePrivate
 * \brief The FlushApiCacheResponsePrivate class provides private implementation for FlushApiCacheResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a FlushApiCacheResponsePrivate object with public implementation \a q.
 */
FlushApiCacheResponsePrivate::FlushApiCacheResponsePrivate(
    FlushApiCacheResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync FlushApiCache response element from \a xml.
 */
void FlushApiCacheResponsePrivate::parseFlushApiCacheResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("FlushApiCacheResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
