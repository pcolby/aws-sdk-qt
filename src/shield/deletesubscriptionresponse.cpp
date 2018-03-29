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

#include "deletesubscriptionresponse.h"
#include "deletesubscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Shield {

/**
 * @class  DeleteSubscriptionResponse
 *
 * @brief  Handles Shield DeleteSubscription responses.
 *
 * @see    ShieldClient::deleteSubscription
 */

/**
 * @brief  Constructs a new DeleteSubscriptionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteSubscriptionResponse::DeleteSubscriptionResponse(
        const DeleteSubscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ShieldResponse(new DeleteSubscriptionResponsePrivate(this), parent)
{
    setRequest(new DeleteSubscriptionRequest(request));
    setReply(reply);
}

const DeleteSubscriptionRequest * DeleteSubscriptionResponse::request() const
{
    Q_D(const DeleteSubscriptionResponse);
    return static_cast<const DeleteSubscriptionRequest *>(d->request);
}

/**
 * @brief  Parse a Shield DeleteSubscription response.
 *
 * @param  response  Response to parse.
 */
void DeleteSubscriptionResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteSubscriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteSubscriptionResponsePrivate
 *
 * @brief  Private implementation for DeleteSubscriptionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSubscriptionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteSubscriptionResponse instance.
 */
DeleteSubscriptionResponsePrivate::DeleteSubscriptionResponsePrivate(
    DeleteSubscriptionResponse * const q) : ShieldResponsePrivate(q)
{

}

/**
 * @brief  Parse an Shield DeleteSubscriptionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteSubscriptionResponsePrivate::DeleteSubscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSubscriptionResponse"));
    /// @todo
}

} // namespace Shield
} // namespace QtAws
