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

#include "deletevpcpeeringauthorizationresponse.h"
#include "deletevpcpeeringauthorizationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameLift {

/**
 * @class  DeleteVpcPeeringAuthorizationResponse
 *
 * @brief  Handles GameLift DeleteVpcPeeringAuthorization responses.
 *
 * @see    GameLiftClient::deleteVpcPeeringAuthorization
 */

/**
 * @brief  Constructs a new DeleteVpcPeeringAuthorizationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteVpcPeeringAuthorizationResponse::DeleteVpcPeeringAuthorizationResponse(
        const DeleteVpcPeeringAuthorizationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeleteVpcPeeringAuthorizationResponse(new DeleteVpcPeeringAuthorizationResponsePrivate(this), parent)
{
    setRequest(new DeleteVpcPeeringAuthorizationRequest(request));
    setReply(reply);
}

const DeleteVpcPeeringAuthorizationRequest * DeleteVpcPeeringAuthorizationResponse::request() const
{
    Q_D(const DeleteVpcPeeringAuthorizationResponse);
    return static_cast<const DeleteVpcPeeringAuthorizationRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift DeleteVpcPeeringAuthorization response.
 *
 * @param  response  Response to parse.
 */
void DeleteVpcPeeringAuthorizationResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteVpcPeeringAuthorizationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteVpcPeeringAuthorizationResponsePrivate
 *
 * @brief  Private implementation for DeleteVpcPeeringAuthorizationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVpcPeeringAuthorizationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteVpcPeeringAuthorizationResponse instance.
 */
DeleteVpcPeeringAuthorizationResponsePrivate::DeleteVpcPeeringAuthorizationResponsePrivate(
    DeleteVpcPeeringAuthorizationResponse * const q) : GameLiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an GameLift DeleteVpcPeeringAuthorizationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteVpcPeeringAuthorizationResponsePrivate::parseDeleteVpcPeeringAuthorizationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVpcPeeringAuthorizationResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace QtAws
