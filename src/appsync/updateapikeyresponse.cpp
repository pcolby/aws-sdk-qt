// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateapikeyresponse.h"
#include "updateapikeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::UpdateApiKeyResponse
 * \brief The UpdateApiKeyResponse class provides an interace for AppSync UpdateApiKey responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::updateApiKey
 */

/*!
 * Constructs a UpdateApiKeyResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateApiKeyResponse::UpdateApiKeyResponse(
        const UpdateApiKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new UpdateApiKeyResponsePrivate(this), parent)
{
    setRequest(new UpdateApiKeyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateApiKeyRequest * UpdateApiKeyResponse::request() const
{
    Q_D(const UpdateApiKeyResponse);
    return static_cast<const UpdateApiKeyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync UpdateApiKey \a response.
 */
void UpdateApiKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateApiKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::UpdateApiKeyResponsePrivate
 * \brief The UpdateApiKeyResponsePrivate class provides private implementation for UpdateApiKeyResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a UpdateApiKeyResponsePrivate object with public implementation \a q.
 */
UpdateApiKeyResponsePrivate::UpdateApiKeyResponsePrivate(
    UpdateApiKeyResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync UpdateApiKey response element from \a xml.
 */
void UpdateApiKeyResponsePrivate::parseUpdateApiKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateApiKeyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
