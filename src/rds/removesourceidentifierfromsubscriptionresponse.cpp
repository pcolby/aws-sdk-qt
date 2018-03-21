/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "removesourceidentifierfromsubscriptionresponse.h"
#include "removesourceidentifierfromsubscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace RDS {

/**
 * @class  RemoveSourceIdentifierFromSubscriptionResponse
 *
 * @brief  Handles RDS RemoveSourceIdentifierFromSubscription responses.
 *
 * @see    RDSClient::removeSourceIdentifierFromSubscription
 */

/**
 * @brief  Constructs a new RemoveSourceIdentifierFromSubscriptionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RemoveSourceIdentifierFromSubscriptionResponse::RemoveSourceIdentifierFromSubscriptionResponse(
        const RemoveSourceIdentifierFromSubscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new RemoveSourceIdentifierFromSubscriptionResponsePrivate(this), parent)
{
    setRequest(new RemoveSourceIdentifierFromSubscriptionRequest(request));
    setReply(reply);
}

const RemoveSourceIdentifierFromSubscriptionRequest * RemoveSourceIdentifierFromSubscriptionResponse::request() const
{
    Q_D(const RemoveSourceIdentifierFromSubscriptionResponse);
    return static_cast<const RemoveSourceIdentifierFromSubscriptionRequest *>(d->request);
}

/**
 * @brief  Parse a RDS RemoveSourceIdentifierFromSubscription response.
 *
 * @param  response  Response to parse.
 */
void RemoveSourceIdentifierFromSubscriptionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RemoveSourceIdentifierFromSubscriptionResponsePrivate
 *
 * @brief  Private implementation for RemoveSourceIdentifierFromSubscriptionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RemoveSourceIdentifierFromSubscriptionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RemoveSourceIdentifierFromSubscriptionResponse instance.
 */
RemoveSourceIdentifierFromSubscriptionResponsePrivate::RemoveSourceIdentifierFromSubscriptionResponsePrivate(
    RemoveSourceIdentifierFromSubscriptionQueueResponse * const q) : RemoveSourceIdentifierFromSubscriptionPrivate(q)
{

}

/**
 * @brief  Parse an RDS RemoveSourceIdentifierFromSubscriptionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RemoveSourceIdentifierFromSubscriptionResponsePrivate::RemoveSourceIdentifierFromSubscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveSourceIdentifierFromSubscriptionResponse"));
    /// @todo
}

} // namespace RDS
} // namespace AWS
