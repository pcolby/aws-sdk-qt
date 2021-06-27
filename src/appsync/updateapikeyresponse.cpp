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
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
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
    return static_cast<const UpdateApiKeyRequest *>(AppSyncResponse::request());
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
