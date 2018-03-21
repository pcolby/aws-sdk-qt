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

#include "deletevpcendpointconnectionnotificationsresponse.h"
#include "deletevpcendpointconnectionnotificationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DeleteVpcEndpointConnectionNotificationsResponse
 *
 * @brief  Handles EC2 DeleteVpcEndpointConnectionNotifications responses.
 *
 * @see    EC2Client::deleteVpcEndpointConnectionNotifications
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteVpcEndpointConnectionNotificationsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DeleteVpcEndpointConnectionNotificationsResponsePrivate(this), parent)
{
    setRequest(new DeleteVpcEndpointConnectionNotificationsRequest(request));
    setReply(reply);
}

const DeleteVpcEndpointConnectionNotificationsRequest * DeleteVpcEndpointConnectionNotificationsResponse::request() const
{
    Q_D(const DeleteVpcEndpointConnectionNotificationsResponse);
    return static_cast<const DeleteVpcEndpointConnectionNotificationsRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DeleteVpcEndpointConnectionNotifications response.
 *
 * @param  response  Response to parse.
 */
void DeleteVpcEndpointConnectionNotificationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteVpcEndpointConnectionNotificationsResponsePrivate
 *
 * @brief  Private implementation for DeleteVpcEndpointConnectionNotificationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVpcEndpointConnectionNotificationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteVpcEndpointConnectionNotificationsResponse instance.
 */
DeleteVpcEndpointConnectionNotificationsResponsePrivate::DeleteVpcEndpointConnectionNotificationsResponsePrivate(
    DeleteVpcEndpointConnectionNotificationsQueueResponse * const q) : DeleteVpcEndpointConnectionNotificationsPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DeleteVpcEndpointConnectionNotificationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteVpcEndpointConnectionNotificationsResponsePrivate::DeleteVpcEndpointConnectionNotificationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVpcEndpointConnectionNotificationsResponse"));
    /// @todo
}
