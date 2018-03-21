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

#include "modifyvpcpeeringconnectionoptionsresponse.h"
#include "modifyvpcpeeringconnectionoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  ModifyVpcPeeringConnectionOptionsResponse
 *
 * @brief  Handles EC2 ModifyVpcPeeringConnectionOptions responses.
 *
 * @see    EC2Client::modifyVpcPeeringConnectionOptions
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyVpcPeeringConnectionOptionsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new ModifyVpcPeeringConnectionOptionsResponsePrivate(this), parent)
{
    setRequest(new ModifyVpcPeeringConnectionOptionsRequest(request));
    setReply(reply);
}

const ModifyVpcPeeringConnectionOptionsRequest * ModifyVpcPeeringConnectionOptionsResponse::request() const
{
    Q_D(const ModifyVpcPeeringConnectionOptionsResponse);
    return static_cast<const ModifyVpcPeeringConnectionOptionsRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 ModifyVpcPeeringConnectionOptions response.
 *
 * @param  response  Response to parse.
 */
void ModifyVpcPeeringConnectionOptionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyVpcPeeringConnectionOptionsResponsePrivate
 *
 * @brief  Private implementation for ModifyVpcPeeringConnectionOptionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyVpcPeeringConnectionOptionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyVpcPeeringConnectionOptionsResponse instance.
 */
ModifyVpcPeeringConnectionOptionsResponsePrivate::ModifyVpcPeeringConnectionOptionsResponsePrivate(
    ModifyVpcPeeringConnectionOptionsQueueResponse * const q) : ModifyVpcPeeringConnectionOptionsPrivate(q)
{

}

/**
 * @brief  Parse an EC2 ModifyVpcPeeringConnectionOptionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyVpcPeeringConnectionOptionsResponsePrivate::ModifyVpcPeeringConnectionOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyVpcPeeringConnectionOptionsResponse"));
    /// @todo
}
