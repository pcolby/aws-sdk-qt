// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateapicacheresponse.h"
#include "updateapicacheresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::UpdateApiCacheResponse
 * \brief The UpdateApiCacheResponse class provides an interace for AppSync UpdateApiCache responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::updateApiCache
 */

/*!
 * Constructs a UpdateApiCacheResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateApiCacheResponse::UpdateApiCacheResponse(
        const UpdateApiCacheRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new UpdateApiCacheResponsePrivate(this), parent)
{
    setRequest(new UpdateApiCacheRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateApiCacheRequest * UpdateApiCacheResponse::request() const
{
    Q_D(const UpdateApiCacheResponse);
    return static_cast<const UpdateApiCacheRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync UpdateApiCache \a response.
 */
void UpdateApiCacheResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateApiCacheResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::UpdateApiCacheResponsePrivate
 * \brief The UpdateApiCacheResponsePrivate class provides private implementation for UpdateApiCacheResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a UpdateApiCacheResponsePrivate object with public implementation \a q.
 */
UpdateApiCacheResponsePrivate::UpdateApiCacheResponsePrivate(
    UpdateApiCacheResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync UpdateApiCache response element from \a xml.
 */
void UpdateApiCacheResponsePrivate::parseUpdateApiCacheResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateApiCacheResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
