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

#include "createvpcendpointconnectionnotificationresponse.h"
#include "createvpcendpointconnectionnotificationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  CreateVpcEndpointConnectionNotificationResponse
 *
 * @brief  Handles EC2 CreateVpcEndpointConnectionNotification responses.
 *
 * @see    EC2Client::createVpcEndpointConnectionNotification
 */

/**
 * @brief  Constructs a new CreateVpcEndpointConnectionNotificationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateVpcEndpointConnectionNotificationResponse::CreateVpcEndpointConnectionNotificationResponse(
        const CreateVpcEndpointConnectionNotificationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new CreateVpcEndpointConnectionNotificationResponsePrivate(this), parent)
{
    setRequest(new CreateVpcEndpointConnectionNotificationRequest(request));
    setReply(reply);
}

const CreateVpcEndpointConnectionNotificationRequest * CreateVpcEndpointConnectionNotificationResponse::request() const
{
    Q_D(const CreateVpcEndpointConnectionNotificationResponse);
    return static_cast<const CreateVpcEndpointConnectionNotificationRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 CreateVpcEndpointConnectionNotification response.
 *
 * @param  response  Response to parse.
 */
void CreateVpcEndpointConnectionNotificationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateVpcEndpointConnectionNotificationResponsePrivate
 *
 * @brief  Private implementation for CreateVpcEndpointConnectionNotificationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateVpcEndpointConnectionNotificationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateVpcEndpointConnectionNotificationResponse instance.
 */
CreateVpcEndpointConnectionNotificationResponsePrivate::CreateVpcEndpointConnectionNotificationResponsePrivate(
    CreateVpcEndpointConnectionNotificationQueueResponse * const q) : CreateVpcEndpointConnectionNotificationPrivate(q)
{

}

/**
 * @brief  Parse an EC2 CreateVpcEndpointConnectionNotificationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateVpcEndpointConnectionNotificationResponsePrivate::CreateVpcEndpointConnectionNotificationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateVpcEndpointConnectionNotificationResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
