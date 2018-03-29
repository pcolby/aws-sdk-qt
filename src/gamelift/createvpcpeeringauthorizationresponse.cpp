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

#include "createvpcpeeringauthorizationresponse.h"
#include "createvpcpeeringauthorizationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GameLift {

/**
 * @class  CreateVpcPeeringAuthorizationResponse
 *
 * @brief  Handles GameLift CreateVpcPeeringAuthorization responses.
 *
 * @see    GameLiftClient::createVpcPeeringAuthorization
 */

/**
 * @brief  Constructs a new CreateVpcPeeringAuthorizationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateVpcPeeringAuthorizationResponse::CreateVpcPeeringAuthorizationResponse(
        const CreateVpcPeeringAuthorizationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new CreateVpcPeeringAuthorizationResponsePrivate(this), parent)
{
    setRequest(new CreateVpcPeeringAuthorizationRequest(request));
    setReply(reply);
}

const CreateVpcPeeringAuthorizationRequest * CreateVpcPeeringAuthorizationResponse::request() const
{
    Q_D(const CreateVpcPeeringAuthorizationResponse);
    return static_cast<const CreateVpcPeeringAuthorizationRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift CreateVpcPeeringAuthorization response.
 *
 * @param  response  Response to parse.
 */
void CreateVpcPeeringAuthorizationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateVpcPeeringAuthorizationResponsePrivate
 *
 * @brief  Private implementation for CreateVpcPeeringAuthorizationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateVpcPeeringAuthorizationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateVpcPeeringAuthorizationResponse instance.
 */
CreateVpcPeeringAuthorizationResponsePrivate::CreateVpcPeeringAuthorizationResponsePrivate(
    CreateVpcPeeringAuthorizationQueueResponse * const q) : CreateVpcPeeringAuthorizationPrivate(q)
{

}

/**
 * @brief  Parse an GameLift CreateVpcPeeringAuthorizationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateVpcPeeringAuthorizationResponsePrivate::CreateVpcPeeringAuthorizationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateVpcPeeringAuthorizationResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace AWS
