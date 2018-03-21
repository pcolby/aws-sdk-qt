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

#include "createvpnconnectionrouteresponse.h"
#include "createvpnconnectionrouteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  CreateVpnConnectionRouteResponse
 *
 * @brief  Handles EC2 CreateVpnConnectionRoute responses.
 *
 * @see    EC2Client::createVpnConnectionRoute
 */

/**
 * @brief  Constructs a new CreateVpnConnectionRouteResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateVpnConnectionRouteResponse::CreateVpnConnectionRouteResponse(
        const CreateVpnConnectionRouteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new CreateVpnConnectionRouteResponsePrivate(this), parent)
{
    setRequest(new CreateVpnConnectionRouteRequest(request));
    setReply(reply);
}

const CreateVpnConnectionRouteRequest * CreateVpnConnectionRouteResponse::request() const
{
    Q_D(const CreateVpnConnectionRouteResponse);
    return static_cast<const CreateVpnConnectionRouteRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 CreateVpnConnectionRoute response.
 *
 * @param  response  Response to parse.
 */
void CreateVpnConnectionRouteResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateVpnConnectionRouteResponsePrivate
 *
 * @brief  Private implementation for CreateVpnConnectionRouteResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateVpnConnectionRouteResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateVpnConnectionRouteResponse instance.
 */
CreateVpnConnectionRouteResponsePrivate::CreateVpnConnectionRouteResponsePrivate(
    CreateVpnConnectionRouteQueueResponse * const q) : CreateVpnConnectionRoutePrivate(q)
{

}

/**
 * @brief  Parse an EC2 CreateVpnConnectionRouteResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateVpnConnectionRouteResponsePrivate::CreateVpnConnectionRouteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateVpnConnectionRouteResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
