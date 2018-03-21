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

#include "createvpnconnectionresponse.h"
#include "createvpnconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  CreateVpnConnectionResponse
 *
 * @brief  Handles EC2 CreateVpnConnection responses.
 *
 * @see    EC2Client::createVpnConnection
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateVpnConnectionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new CreateVpnConnectionResponsePrivate(this), parent)
{
    setRequest(new CreateVpnConnectionRequest(request));
    setReply(reply);
}

const CreateVpnConnectionRequest * CreateVpnConnectionResponse::request() const
{
    Q_D(const CreateVpnConnectionResponse);
    return static_cast<const CreateVpnConnectionRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 CreateVpnConnection response.
 *
 * @param  response  Response to parse.
 */
void CreateVpnConnectionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateVpnConnectionResponsePrivate
 *
 * @brief  Private implementation for CreateVpnConnectionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateVpnConnectionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateVpnConnectionResponse instance.
 */
CreateVpnConnectionResponsePrivate::CreateVpnConnectionResponsePrivate(
    CreateVpnConnectionQueueResponse * const q) : CreateVpnConnectionPrivate(q)
{

}

/**
 * @brief  Parse an EC2 CreateVpnConnectionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateVpnConnectionResponsePrivate::CreateVpnConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateVpnConnectionResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
