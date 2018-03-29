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

#include "deletevpcpeeringconnectionresponse.h"
#include "deletevpcpeeringconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameLift {

/**
 * @class  DeleteVpcPeeringConnectionResponse
 *
 * @brief  Handles GameLift DeleteVpcPeeringConnection responses.
 *
 * @see    GameLiftClient::deleteVpcPeeringConnection
 */

/**
 * @brief  Constructs a new DeleteVpcPeeringConnectionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteVpcPeeringConnectionResponse::DeleteVpcPeeringConnectionResponse(
        const DeleteVpcPeeringConnectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new DeleteVpcPeeringConnectionResponsePrivate(this), parent)
{
    setRequest(new DeleteVpcPeeringConnectionRequest(request));
    setReply(reply);
}

const DeleteVpcPeeringConnectionRequest * DeleteVpcPeeringConnectionResponse::request() const
{
    Q_D(const DeleteVpcPeeringConnectionResponse);
    return static_cast<const DeleteVpcPeeringConnectionRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift DeleteVpcPeeringConnection response.
 *
 * @param  response  Response to parse.
 */
void DeleteVpcPeeringConnectionResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteVpcPeeringConnectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteVpcPeeringConnectionResponsePrivate
 *
 * @brief  Private implementation for DeleteVpcPeeringConnectionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVpcPeeringConnectionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteVpcPeeringConnectionResponse instance.
 */
DeleteVpcPeeringConnectionResponsePrivate::DeleteVpcPeeringConnectionResponsePrivate(
    DeleteVpcPeeringConnectionResponse * const q) : GameLiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an GameLift DeleteVpcPeeringConnectionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteVpcPeeringConnectionResponsePrivate::DeleteVpcPeeringConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVpcPeeringConnectionResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace QtAws
