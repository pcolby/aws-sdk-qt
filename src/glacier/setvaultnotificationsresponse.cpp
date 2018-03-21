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

#include "setvaultnotificationsresponse.h"
#include "setvaultnotificationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glacier {

/**
 * @class  SetVaultNotificationsResponse
 *
 * @brief  Handles Glacier SetVaultNotifications responses.
 *
 * @see    GlacierClient::setVaultNotifications
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetVaultNotificationsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlacierResponse(new SetVaultNotificationsResponsePrivate(this), parent)
{
    setRequest(new SetVaultNotificationsRequest(request));
    setReply(reply);
}

const SetVaultNotificationsRequest * SetVaultNotificationsResponse::request() const
{
    Q_D(const SetVaultNotificationsResponse);
    return static_cast<const SetVaultNotificationsRequest *>(d->request);
}

/**
 * @brief  Parse a Glacier SetVaultNotifications response.
 *
 * @param  response  Response to parse.
 */
void SetVaultNotificationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SetVaultNotificationsResponsePrivate
 *
 * @brief  Private implementation for SetVaultNotificationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetVaultNotificationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetVaultNotificationsResponse instance.
 */
SetVaultNotificationsResponsePrivate::SetVaultNotificationsResponsePrivate(
    SetVaultNotificationsQueueResponse * const q) : SetVaultNotificationsPrivate(q)
{

}

/**
 * @brief  Parse an Glacier SetVaultNotificationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetVaultNotificationsResponsePrivate::SetVaultNotificationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetVaultNotificationsResponse"));
    /// @todo
}
