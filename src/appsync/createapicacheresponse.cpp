// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
