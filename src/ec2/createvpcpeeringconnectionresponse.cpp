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

#include "createvpcpeeringconnectionresponse.h"
#include "createvpcpeeringconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  CreateVpcPeeringConnectionResponse
 *
 * @brief  Handles EC2 CreateVpcPeeringConnection responses.
 *
 * @see    EC2Client::createVpcPeeringConnection
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateVpcPeeringConnectionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new CreateVpcPeeringConnectionResponsePrivate(this), parent)
{
    setRequest(new CreateVpcPeeringConnectionRequest(request));
    setReply(reply);
}

const CreateVpcPeeringConnectionRequest * CreateVpcPeeringConnectionResponse::request() const
{
    Q_D(const CreateVpcPeeringConnectionResponse);
    return static_cast<const CreateVpcPeeringConnectionRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 CreateVpcPeeringConnection response.
 *
 * @param  response  Response to parse.
 */
void CreateVpcPeeringConnectionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateVpcPeeringConnectionResponsePrivate
 *
 * @brief  Private implementation for CreateVpcPeeringConnectionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateVpcPeeringConnectionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateVpcPeeringConnectionResponse instance.
 */
CreateVpcPeeringConnectionResponsePrivate::CreateVpcPeeringConnectionResponsePrivate(
    CreateVpcPeeringConnectionQueueResponse * const q) : CreateVpcPeeringConnectionPrivate(q)
{

}

/**
 * @brief  Parse an EC2 CreateVpcPeeringConnectionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateVpcPeeringConnectionResponsePrivate::CreateVpcPeeringConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateVpcPeeringConnectionResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
