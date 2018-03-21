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

#include "modifyvpcendpointresponse.h"
#include "modifyvpcendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  ModifyVpcEndpointResponse
 *
 * @brief  Handles EC2 ModifyVpcEndpoint responses.
 *
 * @see    EC2Client::modifyVpcEndpoint
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyVpcEndpointResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new ModifyVpcEndpointResponsePrivate(this), parent)
{
    setRequest(new ModifyVpcEndpointRequest(request));
    setReply(reply);
}

const ModifyVpcEndpointRequest * ModifyVpcEndpointResponse::request() const
{
    Q_D(const ModifyVpcEndpointResponse);
    return static_cast<const ModifyVpcEndpointRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 ModifyVpcEndpoint response.
 *
 * @param  response  Response to parse.
 */
void ModifyVpcEndpointResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyVpcEndpointResponsePrivate
 *
 * @brief  Private implementation for ModifyVpcEndpointResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyVpcEndpointResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyVpcEndpointResponse instance.
 */
ModifyVpcEndpointResponsePrivate::ModifyVpcEndpointResponsePrivate(
    ModifyVpcEndpointQueueResponse * const q) : ModifyVpcEndpointPrivate(q)
{

}

/**
 * @brief  Parse an EC2 ModifyVpcEndpointResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyVpcEndpointResponsePrivate::ModifyVpcEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyVpcEndpointResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
