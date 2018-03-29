/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletenotificationsubscriptionresponse.h"
#include "deletenotificationsubscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkDocs {

/**
 * @class  DeleteNotificationSubscriptionResponse
 *
 * @brief  Handles WorkDocs DeleteNotificationSubscription responses.
 *
 * @see    WorkDocsClient::deleteNotificationSubscription
 */

/**
 * @brief  Constructs a new DeleteNotificationSubscriptionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteNotificationSubscriptionResponse::DeleteNotificationSubscriptionResponse(
        const DeleteNotificationSubscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeleteNotificationSubscriptionResponse(new DeleteNotificationSubscriptionResponsePrivate(this), parent)
{
    setRequest(new DeleteNotificationSubscriptionRequest(request));
    setReply(reply);
}

const DeleteNotificationSubscriptionRequest * DeleteNotificationSubscriptionResponse::request() const
{
    Q_D(const DeleteNotificationSubscriptionResponse);
    return static_cast<const DeleteNotificationSubscriptionRequest *>(d->request);
}

/**
 * @brief  Parse a WorkDocs DeleteNotificationSubscription response.
 *
 * @param  response  Response to parse.
 */
void DeleteNotificationSubscriptionResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteNotificationSubscriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteNotificationSubscriptionResponsePrivate
 *
 * @brief  Private implementation for DeleteNotificationSubscriptionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteNotificationSubscriptionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteNotificationSubscriptionResponse instance.
 */
DeleteNotificationSubscriptionResponsePrivate::DeleteNotificationSubscriptionResponsePrivate(
    DeleteNotificationSubscriptionResponse * const q) : WorkDocsResponsePrivate(q)
{

}

/**
 * @brief  Parse an WorkDocs DeleteNotificationSubscriptionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteNotificationSubscriptionResponsePrivate::parseDeleteNotificationSubscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteNotificationSubscriptionResponse"));
    /// @todo
}

} // namespace WorkDocs
} // namespace QtAws
