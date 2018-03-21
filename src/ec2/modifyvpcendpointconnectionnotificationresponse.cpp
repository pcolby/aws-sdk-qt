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

#include "modifyvpcendpointconnectionnotificationresponse.h"
#include "modifyvpcendpointconnectionnotificationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  ModifyVpcEndpointConnectionNotificationResponse
 *
 * @brief  Handles EC2 ModifyVpcEndpointConnectionNotification responses.
 *
 * @see    EC2Client::modifyVpcEndpointConnectionNotification
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyVpcEndpointConnectionNotificationResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new ModifyVpcEndpointConnectionNotificationResponsePrivate(this), parent)
{
    setRequest(new ModifyVpcEndpointConnectionNotificationRequest(request));
    setReply(reply);
}

const ModifyVpcEndpointConnectionNotificationRequest * ModifyVpcEndpointConnectionNotificationResponse::request() const
{
    Q_D(const ModifyVpcEndpointConnectionNotificationResponse);
    return static_cast<const ModifyVpcEndpointConnectionNotificationRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 ModifyVpcEndpointConnectionNotification response.
 *
 * @param  response  Response to parse.
 */
void ModifyVpcEndpointConnectionNotificationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyVpcEndpointConnectionNotificationResponsePrivate
 *
 * @brief  Private implementation for ModifyVpcEndpointConnectionNotificationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyVpcEndpointConnectionNotificationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyVpcEndpointConnectionNotificationResponse instance.
 */
ModifyVpcEndpointConnectionNotificationResponsePrivate::ModifyVpcEndpointConnectionNotificationResponsePrivate(
    ModifyVpcEndpointConnectionNotificationQueueResponse * const q) : ModifyVpcEndpointConnectionNotificationPrivate(q)
{

}

/**
 * @brief  Parse an EC2 ModifyVpcEndpointConnectionNotificationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyVpcEndpointConnectionNotificationResponsePrivate::ModifyVpcEndpointConnectionNotificationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyVpcEndpointConnectionNotificationResponse"));
    /// @todo
}
