// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteapikeyresponse.h"
#include "deleteapikeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::DeleteApiKeyResponse
 * \brief The DeleteApiKeyResponse class provides an interace for AppSync DeleteApiKey responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::deleteApiKey
 */

/*!
 * Constructs a DeleteApiKeyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteApiKeyResponse::DeleteApiKeyResponse(
        const DeleteApiKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new DeleteApiKeyResponsePrivate(this), parent)
{
    setRequest(new DeleteApiKeyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteApiKeyRequest * DeleteApiKeyResponse::request() const
{
    Q_D(const DeleteApiKeyResponse);
    return static_cast<const DeleteApiKeyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync DeleteApiKey \a response.
 */
void DeleteApiKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteApiKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::DeleteApiKeyResponsePrivate
 * \brief The DeleteApiKeyResponsePrivate class provides private implementation for DeleteApiKeyResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a DeleteApiKeyResponsePrivate object with public implementation \a q.
 */
DeleteApiKeyResponsePrivate::DeleteApiKeyResponsePrivate(
    DeleteApiKeyResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync DeleteApiKey response element from \a xml.
 */
void DeleteApiKeyResponsePrivate::parseDeleteApiKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteApiKeyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
