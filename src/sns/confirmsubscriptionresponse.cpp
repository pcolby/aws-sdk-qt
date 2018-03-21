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

#include "confirmsubscriptionresponse.h"
#include "confirmsubscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SNS {

/**
 * @class  ConfirmSubscriptionResponse
 *
 * @brief  Handles SNS ConfirmSubscription responses.
 *
 * @see    SNSClient::confirmSubscription
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ConfirmSubscriptionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SNSResponse(new ConfirmSubscriptionResponsePrivate(this), parent)
{
    setRequest(new ConfirmSubscriptionRequest(request));
    setReply(reply);
}

const ConfirmSubscriptionRequest * ConfirmSubscriptionResponse::request() const
{
    Q_D(const ConfirmSubscriptionResponse);
    return static_cast<const ConfirmSubscriptionRequest *>(d->request);
}

/**
 * @brief  Parse a SNS ConfirmSubscription response.
 *
 * @param  response  Response to parse.
 */
void ConfirmSubscriptionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ConfirmSubscriptionResponsePrivate
 *
 * @brief  Private implementation for ConfirmSubscriptionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ConfirmSubscriptionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ConfirmSubscriptionResponse instance.
 */
ConfirmSubscriptionResponsePrivate::ConfirmSubscriptionResponsePrivate(
    ConfirmSubscriptionQueueResponse * const q) : ConfirmSubscriptionPrivate(q)
{

}

/**
 * @brief  Parse an SNS ConfirmSubscriptionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ConfirmSubscriptionResponsePrivate::ConfirmSubscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ConfirmSubscriptionResponse"));
    /// @todo
}

} // namespace SNS
} // namespace AWS
