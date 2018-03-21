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

#include "deletevpnconnectionresponse.h"
#include "deletevpnconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DeleteVpnConnectionResponse
 *
 * @brief  Handles EC2 DeleteVpnConnection responses.
 *
 * @see    EC2Client::deleteVpnConnection
 */

/**
 * @brief  Constructs a new DeleteVpnConnectionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteVpnConnectionResponse::DeleteVpnConnectionResponse(
        const DeleteVpnConnectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DeleteVpnConnectionResponsePrivate(this), parent)
{
    setRequest(new DeleteVpnConnectionRequest(request));
    setReply(reply);
}

const DeleteVpnConnectionRequest * DeleteVpnConnectionResponse::request() const
{
    Q_D(const DeleteVpnConnectionResponse);
    return static_cast<const DeleteVpnConnectionRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DeleteVpnConnection response.
 *
 * @param  response  Response to parse.
 */
void DeleteVpnConnectionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteVpnConnectionResponsePrivate
 *
 * @brief  Private implementation for DeleteVpnConnectionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVpnConnectionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteVpnConnectionResponse instance.
 */
DeleteVpnConnectionResponsePrivate::DeleteVpnConnectionResponsePrivate(
    DeleteVpnConnectionQueueResponse * const q) : DeleteVpnConnectionPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DeleteVpnConnectionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteVpnConnectionResponsePrivate::DeleteVpnConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVpnConnectionResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
